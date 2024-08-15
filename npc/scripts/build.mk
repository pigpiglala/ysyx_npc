TOPNAME = top

WORK_DIR = $(shell pwd)
BUILD_DIR = $(WORK_DIR)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir

INC_PATH := $(WORK_DIR)/include $(INC_PATH)
INCLUDES = $(addprefix -I, $(INC_PATH))

BIN = $(BUILD_DIR)/$(TOPNAME)

VERILATOR = verilator
VERILATOR_CFLAGS += --cc \
					--trace\
					-I$(abspath ./vsrc/src) \
					-O3

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

VSRC = $(shell find $(abspath ./vsrc) -name "top.v")
CPPSRC = $(shell find $(abspath ./csrc) -name "main.cpp")
CSRC = $(shell find $(abspath ./csrc) -name "*.cpp" -o -name "*.c" -o -name "*.cc")
# use llvm librarys
LLVM_LIBS = $(shell llvm-config --libs) 
LLVM_CFLAGS = $(shell llvm-config --cxxflags)
LDFLAGS = -lreadline 

CFLAGS += $(LLVM_CFLAGS)

CFLAGS := $(filter-out -D__STDC_FORMAT_MACROS, $(CFLAGS))
CFLAGS += $(INCLUDES)

sim: $(VSRC) $(CSRC) 
	@rm -rf $(OBJ_DIR)
	@echo "+ VERILATOR $(notdir  $(VSRC))" 
	@$(VERILATOR) $(VERILATOR_CFLAGS) \
	--top-module $(TOPNAME) $^ \
	-CFLAGS "$(CFLAGS)" \
	-LDFLAGS $(LDFLAGS) \
	--Mdir $(OBJ_DIR) --exe \
	-o $(abspath $(BIN))
	
build: sim
	@echo "+ make V$(TOPNAME).mk"
	@$(MAKE) -C $(OBJ_DIR) -f V$(TOPNAME).mk \
	LDFLAGS+=-L$(NEMU_HOME)/build \
	LIBS+=$(LLVM_LIBS) \
	LIBS+=-l:riscv32-nemu-interpreter-so \
	
run: build
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	$(BIN)

gdb: build
	gdb $(BIN)



.PHONY: default clean all sim 
