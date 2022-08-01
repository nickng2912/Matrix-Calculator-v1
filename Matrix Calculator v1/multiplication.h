#include <iostream>
using namespace std; 

int** multiplication(int** matrix1, int** matrix2, int row1, int row2, int col1, int col2) {
	if (col1 != row2) {
		cout << "Error";
		return 0;
	}

	int** matrix3 = new int* [row1];
	for (int i = 0; i < row1; i++) {
		matrix3[i] = new int[col2];
	}

	if (col1 == row2) {
		for (int i = 0; i < row1; i++) {
			for (int j = 0; j < col2; j++) {
				matrix3[i][j] = 0;
				for (int k = 0; k < col1; k++) {
					matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
				}
			}
		}
	}

	return matrix3;
}