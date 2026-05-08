CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -O2

all: ex2

ex2: ex2.cpp
	$(CXX) $(CXXFLAGS) -o ex2 ex2.cpp

clean:
	rm -f ex2
