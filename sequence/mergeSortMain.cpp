// mergeSortMain.cpp
// MergeSort test program.

#include <iostream>
using std::cout;
using std::endl;

#include "MergeSort.h"

int main()
{
	MergeSort sortVector( 10 );

	cout << "Unsorted vector:" << endl;
	sortVector.displayElements();
	cout << endl << endl;

	sortVector.sort();

	cout << "Sorted vector:" << endl;
	sortVector.displayElements();
	cout << endl;
	return 0;
}
