// MergeSort.h
// Class that creates a vector filled with random integers.
// Provides a function to sort the vector with merge sort

#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
using std::vector;

class MergeSort
{
public:
	MergeSort( int );
	void sort();
	void displayElements() const;
private:
	int size;
	vector< int > data;
	void sortSubVector( int, int );
	void merge( int, int, int, int );
	void displaySubVector( int, int ) const;
};

#endif
