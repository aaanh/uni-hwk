# Tell make to make one .out or .exe file for each .cpp

ifeq ($(OS), Linux)
all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))
endif

ifeq ($(OS), Windows_NT)
all: $(patsubst %.cpp, %.exe, $(wildcard *.cpp))
endif

ifeq ($(shell uname -s), Darwin)
all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))
endif

# Rule how to create arbitrary .out files

%.out: %.cpp Makefile
	c++ -std=c++17 -Wall -o bin/main main.cpp util.cpp -Wno-unused-variable

%.exe: %.cpp Makefile
	c++ -std=c++17 -Wall -o bin/main main.cpp util.cpp -Wno-unused-variable