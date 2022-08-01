#include <iostream>
using namespace std; 

int** transpose(int** matrix, int row, int col) {
	if (row != col) {
		cout << "Error";
		return 0;
	}

	int** matrix3 = new int* [col];
	for (int i = 0; i < col; i++) {
		matrix3[i] = new int[row];
	}

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			matrix3[i][j] = matrix[j][i];
		}
	}

	return matrix3;

}