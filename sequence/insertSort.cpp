// insertSort.cpp
// This program sorts an array's values into ascending order.
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

int main()
{
	const int arraySize = 10;
	int a[ arraySize ];
	int insert;

	srand( time( 0 ) );
	for( int i = 0; i < arraySize; i++ )
	{
		a[ i ] = ( 10 + rand() % 90 );
	}

	cout << "Unsorted array:\n";

	for( int i = 0; i < arraySize; i++ )
	{
		cout << left << setw( 3 ) << a[ i ];
	}

	for( int next = 1; next < arraySize; next++ )
	{
		insert = a[ next ];
		int moveItem = next;

		while( ( moveItem > 0 ) && ( a[ moveItem - 1 ] > insert ) )
		{
			a[ moveItem ] = a[ moveItem - 1];
			moveItem--;
		}

		a[ moveItem ] = insert;
	}

	cout << "\nSorted array:\n";

	for( int i = 0; i < arraySize; i++ )
	{
		cout << left << setw( 3 ) << a[ i ];
	}

	cout << endl;
	
	return 0;
}
