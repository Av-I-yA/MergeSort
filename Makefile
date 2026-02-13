main: main.o src/recursive.o src/iterative.o src/merge.o utilities.hpp
	g++ main.o src/recursive.o src/iterative.o src/merge.o -o main