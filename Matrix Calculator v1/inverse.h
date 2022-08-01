#include <iostream> 
using namespace std; 

int** inverse(int** matrix, int row, int col) {
	int** matrix3 = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix3[i] = new int[col];
	}
	matrix3[0][0] = matrix[1][1];
	matrix3[0][1] = matrix[1][0] * -1;
	matrix3[1][0] = matrix[0][1] * -1;
	matrix3[1][1] = matrix[0][0];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix3[i][j] = matrix3[i][j] * 1 / determinant(matrix, row, col);
		}
	}
	return matrix3;

}