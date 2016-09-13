// BinarySearch test program
// binarySearchMain.cpp

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "BinarySearch.h"

int main()
{
	int searchInt;
	int position;

	BinarySearch searchVector( 15 );
	searchVector.displayElements();

	cout << "\nPlease enter an integer value(-1 to quit): ";
	cin >> searchInt;
	cout << endl;

	while( searchInt != -1 )
	{
		position = searchVector.binarySearch( searchInt );

		if( position == -1 )
		{
			cout << "The integer " << searchInt
				<< " was not found.\n";
		}
		else
		{
			cout << "the integer " << searchInt
				<< " was found in position " << position << ".\n";
		}

		cout << "\n\nPlease enter an integer value(-1 to quit): ";
		cin >> searchInt;
		cout << endl;
	}

	return 0;
}
