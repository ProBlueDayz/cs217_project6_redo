all: test 

test: test_graph.o
	g++ -std=c++11 -Wall -g -o test test_graph.o

test_graph.o: test_graph.cpp graph.cpp graph.h
	g++ -std=c++11 -c -g -Wall test_graph.cpp
