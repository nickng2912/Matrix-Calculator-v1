#include <iostream>
using namespace std; 

int** substraction(int** matrix1, int** matrix2, int row1, int row2, int col1, int col2) 
{
	if (row1 != row2 || col1 != col2) {
		cout << "Error";
		return 0;
	}

	int** matrix3 = new int* [row1];
	for (int i = 0; i < row1; i++) {
		matrix3[i] = new int[col1];
	}

	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}

	return matrix3;
}