all: $(patsubst %.cpp, %, $(wildcard *.cpp))

%: %.cpp Makefile
	c++ $< -o $@ -std=c++17