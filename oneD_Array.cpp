/*Arrays are used to store items at contiguous memory locations 
and elements can be accessed using indices of an array.
Array has two types:
        - 1-D array
        - 2-D array*/

#include <iostream>

void print(int *num, int size); // Add size parameter

int main() {
    int num[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(num) / sizeof(num[0]); // Calculate the size of the array in the main function
    print(num, size); // Pass both the array and its size to the print function
    return 0;
}

void print(int *num, int size) { // Accept the size as a parameter
    for (int j = 0; j < size; j++) {
        std::cout << num[j] << "\n";
    }
}