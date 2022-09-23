//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//void main() {
//	int row = 2;
//	int column = 2;
//	ifstream fin("input.txt");
//	//int array[row][column];
//	int userInput;
//	int numValues = row * column;
//
//	int* p = new int[row * column];
//
//	//i might need to change this accomodate different sized rows
//	//when adding new do I just need to change the rows if it gets too large
//	// the const row can be created after the first line is read
//	//I will probablh need a dynamic array
//	//by reading when the line ends i dont have to have to check eof inside the loop
//	//i need this to change to properly let it catch
//	while (fin.good()) {
//		for (int i = 0; i < row; i++) {
//			for (int j = 0; j < column; j++) {
//				fin >> userInput;
//				*(p + i*row + j) = userInput;
//			}
//		}
//	}
//
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			//fin >> userInput;
//			cout << "[" << *(p + i*row + j) << "]";
//		}
//		cout << endl;
//	}
//	cout << endl;
//
//	//cout << endl << p[2] << endl;
//
//	//call the same output and input stuff everytime since row should change
//	//or add them in the function conditions?
//	//row += 1;
//	int* q = new int[(row + 1) * column];
//	for (int i = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			*(q + i * row + j) = *(p + i * row + j);
//		}
//	}
//	row += 1;
//
//	delete[]p;
//	p = q;
//	q = NULL;
//	
//	//numValues += 1;
//
//	//cout << p[3] << endl;
//	//works
//
//	//for (int i = 0; i < row; i++) {
//	//	for (int j = 0; j < column; j++) {
//	//		//cout << "[" << *(p + i * row + j) << "]";
//	//	//	if ((2 * row + j) < numValues) {
//	//			//cout << << endl;
//	//	//		cout << "[" << *(p + i * row + j) << "]";
//	////		}
//	//	//	else
//	//		cout << "[]" << endl;
//	//	}
//	//	cout << endl;
//	//}
//	//for ()
//
//	//cout << endl << p[2] << endl;
//
//	//for (int i = 0; i < row; i++) {
//	//	for (int j = 0; j < column; j++) {
//	//		//fin >> userInput;
//	//		//cout << "[ ]";
//	//		if ((2 * i + j) < numValues) {
//	//		//cout << 2 * i + j << endl;
//	//			cout << "[" << *(p + i * row + j) << "]";
//	//		}
//	//		else {
//	//			cout << "[]" << endl;
//	//		}
//	//	}
//	//	cout << endl;
//	//}
//	//cout << endl;
//
//
//	numValues += 1;
//	p[4] = 7;
//
//	for (int i = 0; i < (column * row); i++) {
//		if (i < numValues) {
//			cout << "[" << p[i] << "]";
//		}
//		else {
//			cout << "[ ]";
//		}
//		if ((i + 1) % 2 == 0) {
//			//cout << i;
//			cout << endl;
//		}
//	}
//
//	cout << endl;
//	//10xrow + current colum val?
//	//%2 on num values?
//
//	char userOption;
//
//	cout << "a - Array Menu" << endl;
//	cout << "b - Find Value" << endl;
//	cout << "c - Modify Value" << endl;
//	cout << "f - Add Value" << endl;
//	cout << "d - Remove Value" << endl;
//	cout << "e - print array" << endl;
//	cout << "q - quit" << endl << endl;
//
//	do {
//		cin >> userOption;
//		switch (userOption) {
//		case 'a':
//			//find integer
//			break;
//		case 'b':
//			//modify value
//			break;
//		case 'c':
//			//add integer
//			break;
//		case 'd':
//			//delete integer
//			break;
//		default:
//			cout << "Invalid Input" << endl;
//			break;
//		}
//	} while (userOption != 'q');
//
//	cout << "hello" << endl;
//
//}
//
//
////check if the last index is 10 to add a new row
////if the index of the removed is 0 then remove that row