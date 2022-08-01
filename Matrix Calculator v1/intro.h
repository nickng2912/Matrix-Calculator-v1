#include <iostream> 
using namespace std; 

void intro()
{
	cout << "Welcome to the Matrix Calculator Made by Nick.\n" << endl;
	cout << "PRECONDITION: " << endl;
	cout << "\t-For ADDITION and SUBTRACTION, both Matrices have to be the SAME SIZE." << endl;
	cout << "\t-For MULTIPLICATION and LINEAR COMBINATION, the COLUMN of Matrix 1 must be the SAME as the ROW of Matrix 2." << endl;
	cout << "\t-For TRACE, the Matrix must be a SQUARE MATRIX (ROW = COLUMN)." << endl;
	cout << "\t-For DETERMINANT and INVERSE, the Matrix must be a SQUARE 2x2 Matrix." << endl << endl;
}