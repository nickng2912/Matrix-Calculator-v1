#include <iostream>
#include "addition.h"
#include "determinant.h"
#include "intro.h"
#include "inverse.h"
#include "multiplication.h"
#include "printmatrix.h"
#include "substraction.h"
#include "trace.h"
#include "transpose.h"
using namespace std; 

int main()
{
	intro();

	int row1, row2, col1, col2;
	
	cout << "Enter the # of ROW and # of COLUMN for Matrix 1: ";
	cin >> row1 >> col1;
	int** matrix1 = new int* [row1];
	for (int i = 0; i < row1; i++) {
		matrix1[i] = new int[col1];
	}
	cout << "Now fill out Matrix 1 with integers: ";
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			cin >> matrix1[i][j];
		}
	}
	cout << "Heres your Matrix 1: \n";
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;

	cout << "Enter the # of ROW and # of COLUMN for Matrix 2: ";
	cin >> row2 >> col2;
	int** matrix2 = new int* [row2];
	for (int i = 0; i < row2; i++) {
		matrix2[i] = new int[col2];
	}
	cout << "Now fill out Matrix 2 with integers: ";
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			cin >> matrix2[i][j];
		}
	}
	cout << "Heres you Matrix 2: \n";
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nWhich calculation you want to perform?" << endl;
	cout << "\t1)Addition" << endl;
	cout << "\t2)Subtraction" << endl;
	cout << "\t3)Multiplication" << endl;
	cout << "\t4)Transpose" << endl;
	cout << "\t5)Trace" << endl;
	cout << "\t6)Determinant of a 2x2" << endl;
	cout << "\t7)Inverse of a 2x2" << endl;


	int num = 0;
	int choice = 0;
	cin >> choice;

	if (choice == 1) {
		//addition
		int** matrix3 = addition(matrix1, matrix2, row1, row2, col1, col2);
		printArray(matrix3, row1, col1);
	}
	else if (choice == 2) {
		//substraction
		int** matrix3 = substraction(matrix1, matrix2, row1, row2, col1, col2);
		printArray(matrix3, row1, col1);
	}
	else if (choice == 3) {
		//multiplication
		int** matrix3 = multiplication(matrix1, matrix2, row1, row2, col1, col2);
		printArray(matrix3, row1, col2);
	}
	else if (choice == 4) {
		cout << "Which Matrix you want to Transpose?" << endl;
		cout << "\t1 for Matrix 1" << endl;
		cout << "\t2 for Matrix 2" << endl;
		cin >> num;
		if (num == 1) {
			//transpose matrix 1; 
			int** matrix3 = transpose(matrix1, row1, col1);
			printArray(matrix3, row1, col1);
		}
		else {
			//transpose matrix 2:
			int** matrix3 = transpose(matrix2, row2, col2);
			printArray(matrix3, row2, col2);
		}
	}
	else if (choice == 5) {
		cout << "Which Matrix you want to Trace?" << endl;
		cout << "\t1 for Matrix 1" << endl;
		cout << "\t2 for Matrix 2" << endl;
		cin >> num;
		if (num == 1) {
			//trace matrix 1; 
			trace(matrix1, row1, col1);
		}
		else {
			//trace matrix 2:
			trace(matrix2, row2, col2);
		}
	}
	else if (choice == 6) {
		cout << "Which Matrix you want to Determinant?" << endl;
		cout << "\t1 for Matrix 1" << endl;
		cout << "\t2 for Matrix 2" << endl;
		cin >> num;
		if (num == 1) {
			//determinant matrix 1; 
			cout << "The determinant of your Matrix is: " << determinant(matrix1, row1, col1);
		}
		else {
			//determinannt matrix 2:
			cout << "The determinant of your Matrix is: " << determinant(matrix2, row2, col2);
		}
	}
	else if (choice == 7) {
		cout << "Which Matrix you want to Inverse?" << endl;
		cout << "\t1 for Matrix 1" << endl;
		cout << "\t2 for Matrix 2" << endl;
		cin >> num;
		if (num == 1) {
			//inverse matrix 1; 
			int** matrix3 = inverse(matrix1, row1, col1);
			printArray(matrix3, row1, col1);
		}
		else {
			//inverse matrix 2:
			int** matrix3 = inverse(matrix2, row2, col2);
			printArray(matrix2, row2, col2);
		}
	}
	else {
		cout << "Invalid Choice" << endl;
	}

	system("pause");
	return	0;
}