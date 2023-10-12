# Configure CPP compilation flags
CXX_FLAGS=


CPP_FILES=$(wildcard *.cpp)
BIN_FILES=$(patsubst %.cpp,%.exe,${CPP_FILES})

all: $(BIN_FILES)

%.exe: %.cpp
	g++ $(CXX_FLAGS) $< -g -o $@

.PHONY: clean
clean:
	rm -f *.exe
