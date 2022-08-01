#include <iostream>
using namespace std; 

int determinant(int** matrix, int row, int col) {
	if (row == 2 && col == 2) {
		int determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
		return determinant;
	}
	else {
		cout << "Error";

	}
}