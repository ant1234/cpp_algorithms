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
bool InsertElement(int** dynamicArray, int element, int & size, int& capacity);
void DeleteElement(int* dynamicArray, int elementIndex, int & size);
void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity);

int main() {

    int capacity = 5;
    int size;
    int* dynamicArray = CreateDynamicArray(capacity, size);

    // Example usage
    for (int i = 0; i < 10; i++) {
        if (!InsertElement(&dynamicArray, i * 2, size, capacity)) {
            std::cout << "Failed to insert element " << i * 2 << ". Resizing array.\n";
        }
    }

    // Print the array
    std::cout << "Dynamic Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << "\n";

    // Delete an element
    DeleteElement(dynamicArray, 3, size);

    // Print the array after deletion
    std::cout << "Dynamic Array after deletion: ";
    for (int i = 0; i < size; i++) {
        std::cout << dynamicArray[i] << " ";
    }
    std::cout << "\n";

    // Resize the array
    ResizeDynamicArray(&dynamicArray, size, capacity * 2);

    // Delete the dynamic array
    DeleteDynamicArray(dynamicArray, size);

    return 0;
}

int * CreateDynamicArray(int capacity, int& size) {

    size = 0;
    return new int[capacity];

}

void DeleteDynamicArray(int* dynamicArray, int &size) {
    delete[] dynamicArray;
    size = 0;
}

bool InsertElement(int** dynamicArray, int element, int & size, int& capacity) {
    if (size == capacity) {
        // Need to resize the array before inserting the element
        ResizeDynamicArray(dynamicArray, size, capacity * 2);
        capacity *= 2;
    }

    (*dynamicArray)[size] = element;
    size++;
    return true;
}

void DeleteElement(int* dynamicArray, int elementIndex, int & size) {
    if (elementIndex < 0 || elementIndex >= size) {
        // Invalid index, do nothing
        return;
    }

    // Shift elements to remove the one at elementIndex
    for (int i = elementIndex; i < size - 1; i++) {
        dynamicArray[i] = dynamicArray[i + 1];
    }

    size--;
}

void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity) {
    int* newArray = new int[newCapacity];
    
    // Copy elements from the old array to the new array
    for (int i = 0; i < size; i++) {
        newArray[i] = (*dynamicArray)[i];
    }

    // Delete the old array and update the pointer
    delete[] * dynamicArray;
    *dynamicArray = newArray;
}


