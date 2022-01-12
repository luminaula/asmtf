TARGET_NAME := asmtf

IDIR := ./inc
CC := gcc
CFLAGS := -ggdb -Wextra -Werror -masm=intel -std=c17 -I${IDIR}
LD_FLAGS := -lpthread

BUILD_DIR := ./build
SRC_DIR := ./src

SRC := $(shell find $(SRC_DIR) -name '*.c')
OBJ := $(SRC:%=$(BUILD_DIR)/%.o)

$(BUILD_DIR)/$(TARGET_NAME) : $(OBJ)
	$(CC) $(OBJ) -o $@ $(LD_FLAGS)


$(BUILD_DIR)/%.c.o : %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(BUILD_DIR)/$(TARGET_NAME)

clean: 
	rm -r $(BUILD_DIR)