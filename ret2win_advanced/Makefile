CC := gcc

CFLAGS := -fno-stack-protector

BUILD_DIR := .
SOURCE_CODE := ret2win.c
EXECUTABLE_FILE := executable_ret2win

.PHONY: all clean

all: $(BUILD_DIR)/$(EXECUTABLE_FILE)

$(BUILD_DIR)/$(EXECUTABLE_FILE): $(BUILD_DIR)/$(SOURCE_CODE)
	$(CC) $(CFLAGS) $^ -o $@
clean:
	rm -f $(BUILD_DIR)/$(EXECUTABLE_FILE)
