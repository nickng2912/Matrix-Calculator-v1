#include <iostream>
using namespace std; 

void trace(int** matrix, int row, int col) {
	if (row != col) {
		cout << "Error";

	}

	int trace = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == j) {
				trace = trace + matrix[i][j];
			}
		}
	}
	cout << "The trace of your Matrix is: " << trace << endl;
}