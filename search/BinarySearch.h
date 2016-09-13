#ifndef BINARY_H
#define BINARY_H

#include <vector>
using std::vector;

class BinarySearch
{
public:
	BinarySearch( int );
	int binarySearch( int ) const;
	void displayElements() const;
private:
	int size;
	vector< int > data;
	void displaySubElements( int, int ) const;
};

#endif
