# Tell make to make one .out file for each .cpp
all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))

# Rule how to create arbitrary .out files

%.out: %.cpp Makefile
	g++ $< -o $@ -std=c++0x