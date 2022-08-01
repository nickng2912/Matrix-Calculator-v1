#include <iostream> 
using namespace std; 

void printArray(int** matrixPrint, int row, int col)
{
	cout << "Here is your Matrix: " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrixPrint[i][j] << " ";
		}
		cout << endl;
	}
}
