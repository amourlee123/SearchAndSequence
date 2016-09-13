// selectionSort.cpp
// This program puts values into an array, sorts the values into
// ascending order and prints the resulting array.

#include <iostream>
using std::cout;
using std::endl;
using std::left;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;


void selectionSort( int * const, const int );
void swap( int * const, int * const );

int main()
{
	const int arraySize = 10;
	int a[ arraySize ];

	srand( time( 0 ) );
	for( int i = 0; i < arraySize; i++ )
	{
		a[ i ] = ( 10 + rand() % 90 );
	}

	cout << "Data items in original order\n";
	for( int i = 0; i < arraySize; i++ )
	{
		cout << left << setw( 3 ) << a[ i ];
	}

	selectionSort( a, arraySize );
	
	cout << "\nData items in ascending order\n";

	for( int i = 0; i < arraySize; i++ )
	{
		cout << left << setw( 3 ) << a[ i ];
	}

	cout << endl;

	return 0;
}

void selectionSort( int * const array, const int sizeOfArray )
{
	int smallest;
	
	for( int i = 0; i < sizeOfArray; i++ )
	{
		smallest = i;

		for( int index = i + 1; index < sizeOfArray; index++ )
		{
			if( array[ smallest ] > array[ index ] )
				smallest = index;
		}

		swap( &array[ i ], &array[ smallest ] );
	}
}

void swap( int * const element1Ptr, int * const element2Ptr )
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
