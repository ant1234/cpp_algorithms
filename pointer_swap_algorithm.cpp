#include <iostream>

void swap(int * x, int * y);

int main() {

    int x = 10;
    int y = 25;

    int * xPointer = &x;
    int * yPointer = &y;

    swap(xPointer, yPointer);

    return 0;
}


void swap(int * x, int * y)
{
	int temp = *x;
	*x = *y;
	*y = temp;

    std::cout << *x << "  " << *y << std::endl;

}