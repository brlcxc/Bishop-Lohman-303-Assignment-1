#include <iostream>
#include <fstream>
#include <string>
#include "functions.h"
using namespace std;

void FillArray(ifstream& fin, int arraySize, int*& numArray) {
	while (fin.good()) {
		for (int i = 0; i < arraySize; i++) {
			fin >> numArray[i];
		}
	}
}

void PrintMenu() {
	cout << "Menu:" << endl;
	cout << "a) - print array" << endl;
	cout << "b) - Find Value" << endl;
	cout << "c) - Modify Value" << endl;
	cout << "d) - Add Value" << endl;
	cout << "e) - Remove Value" << endl;
	cout << "q) - quit" << endl << endl;
}

char UserOption() {
	//list of possible options
	string inputOptions = "abcdeq";
	char userOption;
	PrintMenu();
	while (true) {
		cout << "Input option => ";
		cin >> userOption;
		cout << endl;
		if (inputOptions.find(tolower(userOption)) != string::npos) {
			return tolower(userOption);
		}
		else {
			cout << "Incorrect Input - Try Again" << endl;
		}
	}
}

void OutputArray(int arraySize, int numArray[]) {
	for (int i = 0; i < (arraySize - 1); i++) {
		cout << numArray[i] << ", ";
		//formats the output so that the numbers are in lines of 10
		if ((i + 1) % 10 == 0) {
			cout << endl;
		}
	}
	cout << numArray[arraySize-1] << endl << endl;
}

void FindValue(int arraySize, int numArray[]) {
	int userInput = ValueNum();
	int index = SearchValue(userInput, arraySize, numArray);
	if (index == -1) {
		cout << "Number not found" << endl << endl;
	}
	else {
		cout << "Value " << userInput << " found at index " << index << endl << endl;
	}
}

int ValueNum() {
	int userInput;
	cout << "Input a value => ";
	cin >> userInput;
	return userInput;
}

int SearchValue(int userInput, int arraySize, int numArray[]) {
	//the entire array is searched to find the first occurence of the value
	for (int i = 0; i < arraySize + 1; i++) {
		if (numArray[i] == userInput) {
			return i;
		}
	}
	return -1;
}

int ModifyValue(int arraySize, int*& numArray, int userIndex) {
	int newUserValue;

	newUserValue = ValueNum();
	numArray[userIndex] = newUserValue;

	//the new value
	return newUserValue;
	
}

void ModifyValueOutout(int arraySize, int*& numArray){
	int originalValue;
	int newUserValue;

	int userIndex = VerifyIndex(arraySize);

	//the value is only modified if a correct index is input
	if (userIndex == -1) {
		cout << "Error: Index out of range" << endl << endl;
	}
	else {
		cout << endl;
		originalValue = numArray[userIndex];
		newUserValue = ModifyValue(arraySize, numArray, userIndex);
		cout << endl;
		OutputArray(arraySize, numArray);
		cout << "Original value: " << originalValue << " New value: " << newUserValue << endl << endl;
	}
}

int VerifyIndex(int arraySize) {
	int userInput;
	cout << "Input index => ";
	cin >> userInput;
	//retuns the index if valid and -1 if invalid
	if ((userInput >= 0) && (userInput < arraySize)) {
		return userInput;
	}
	else {
		return -1;
	}
}

void AddValue(int& arraySize, int*& numArray) {
	int newValue = AddValueNum();
	//calls the increase array function before placing the new value
	IncreaseArray(arraySize, numArray);
	numArray[arraySize - 1] = newValue;
	OutputArray(arraySize, numArray);
}

void IncreaseArray(int& arraySize, int*& numArray) {
	arraySize++;
	int* q = new int[arraySize];
	//The values are coppied into the new larger array
	for (int i = 0; i < arraySize; i++) {
		q[i] = numArray[i];
	}

	delete[]numArray;
	numArray = q;
	q = NULL;
}


int AddValueNum() {
	int userInput;
	cout << "Input a value to add => ";
	cin >> userInput;
	cout << endl;
	return userInput;
}

void RemoveValue(int& arraySize, int*& numArray) {
	//A proper index is found
	int userIndex = VerifyIndex(arraySize);
	if (userIndex == -1) {
		cout << "Error: Index out of range" << endl << endl;
	}
	else {
		cout << endl;
		DecreaseArray(userIndex, arraySize, numArray);
		OutputArray(arraySize, numArray);
	}
}

void DecreaseArray(int numIndex, int& arraySize, int*& numArray) {
	arraySize--;
	int* q = new int[arraySize];
	//the loop skips over the index of the removed value when copying everything
	for (int i = 0; i < arraySize + 1; i++) {
		if (i < numIndex) {
			q[i] = numArray[i];
		}
		else if (i > numIndex) {
			q[i - 1] = numArray[i];
		}
	}

	delete[]numArray;
	numArray = q;
	q = NULL;
}