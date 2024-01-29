/*
  Problem: Create a dynamic array of integers that can be resized every time the array is full. 
  There should be 5 functions that will be used with this dynamic array:

    int * CreateDynamicArray(int capacity, int& size);

  This will do the first creation of the dynamic array based on the capacity passed in to the 
  CreateDynamicArray function. Size should be set to 0

    void DeleteDynamicArray(int* dynamicArray, int &size);

  DeleteDynamicArray will actually delete the memory created by CreateDynamicArray. 
  Size should be set to 0

    void InsertElement(int** dynamicArray, int element, int & size, int& capacity);

  InsertElement will add a new element to the end of the array and increase the size by 1. 
  It should return false if it doesn't have the capacity to add the new element and true otherwise.

    void DeleteElement(int* dynamicArray, int elementIndex, int & size);

  DeleteElement will remove the element at elementIndex. 
  There should be no empty spaces between elements. The dynamic array should not be resized.

    void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity);

  ResizeDynamicArray should resize the array to be newCapacity. 
  All the previous elements in the dynamic array should remain intact and 
  in the order they were in beforehand. 

  Make sure there are no memory leaks anywhere in the code!

*/

#include <iostream>

int * CreateDynamicArray(int capacity, int& size);
void DeleteDynamicArray(int* dynamicArray, int &size);
void InsertElement(int** dynamicArray, int element, int & size, int& capacity);
void DeleteElement(int* dynamicArray, int elementIndex, int & size);
void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity);

int main() {

    return 0;
}

int * CreateDynamicArray(int capacity, int& size) {

    return 0;
}

void DeleteDynamicArray(int* dynamicArray, int &size) {

}

void InsertElement(int** dynamicArray, int element, int & size, int& capacity) {

}

void DeleteElement(int* dynamicArray, int elementIndex, int & size) {

}

void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity) {

}


