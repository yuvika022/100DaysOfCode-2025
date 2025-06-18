CXX = g++
CXXFLAGS = -std=c++17 -Wall

FILES = 1 2 3

all: $(FILES)

file1: 1.cpp
	$(CXX) $(CXXFLAGS) -o 1 1.cpp

file2: 2.cpp
	$(CXX) $(CXXFLAGS) -o 2 2.cpp

file3: 3.cpp
	$(CXX) $(CXXFLAGS) -o 3 3.cpp

run: all
	./1 
	./2
	./3

clean:
	rm -f $(FILES)
