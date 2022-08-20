# Specify the target file and the install directory
OUTPUTFILE=myprog.exe
CFLAGS=-std=c++17

# Default target
.PHONY: all
all: $(OUTPUTFILE)

# Build hello from hello.cpp
$(OUTPUTFILE): main.cpp
	g++ -o $@ $< $(CFLAGS)

# Install and clean targets as in Example 1-16