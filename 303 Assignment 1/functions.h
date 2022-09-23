#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_
using namespace std;

/* Inputs the file values into array
   pre: the file exists
   post: the array has values from the file
*/
void FillArray(ifstream& fin, int arraySize, int*& numArray);

void PrintMenu();

/* Has the user select an options and returns a valid option
   pre: none
   post: a valid option is returned
*/
char UserOption();

void OutputArray(int arraySize, int numArray[]);

/* A value is found from the user and the index is returned
   pre: the array has values
   post: the index of the value is returned
*/
void FindValue(int arraySize, int numArray[]);

/* The user is asked to input a value which is returned
   pre: none
   post: value returned
*/
int ValueNum();

/* The values is searched within the array
   pre: the input is valid and the array exists
   post: either the index of the value or -1 if it does not exist
*/
int SearchValue(int userInput, int arraySize, int numArray[]);

/* The value in the array is modified at a certain index and the new value is returned
   pre: The array and index are valid
   post: The updated value is returned
*/
int ModifyValue(int arraySize, int*& numArray, int userIndex);

/* The old value and modified value are output
   pre: The array is valid
   post: New and old value output
*/
void ModifyValueOutout(int arraySize, int*& numArray);

/* The array index is returned
   pre: The array size is valid
   post: The index is returned if valid and -1  if invalid
*/
int VerifyIndex(int arraySize);

/* A value is added to the end of an array
   pre: The array size is valid
   post: A new value is added to the last index of the array
*/
void AddValue(int& arraySize, int*& numArray);

/* The array size is increased
   pre: The array size is valid
   post: The array size is increased by 1
*/
void IncreaseArray(int& arraySize, int*& numArray);

/* The user is asked to input a value and it is returned
   pre: The array size is valid
   post: The user value is returned
*/
int AddValueNum();

/* A value is removed
   pre: The array size is valid
   post: A value at an array is removed
*/
void RemoveValue(int& arraySize, int*& numArray);

/* The array size is shortened
   pre: The array size and index is valid
   post: The provided index is removed from the array
*/
void DecreaseArray(int numIndex, int& arraySize, int*& numArray);

#endif