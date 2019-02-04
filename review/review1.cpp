// CPSC 131-04 SI Session 1 Review
// Spring 2019
//
// Linux users, to compile this program use the following commands:
//      g++ -std=c++11 review1.cpp -o review1
//      ./review1
//
#include <iostream>
#include "math.h"

int get_power(int base, int exponent) {
    return pow(base, exponent);
}

void print_array(int *arr, int size) {
    // TO BE COMPLETED
    for (int i = 0; i < size; i++) {
      std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 10;

    // Declare an array of size 10 in the stack.
    int array[size];

    // Populate the values of the array declared above with
    // the powers of 2 using the function provided above.
    for (int i = 0; i < size; i++) {
      array[i] = get_power(i, 2);
    }

    // Declare an array of size 10 in the heap.
    int *ar = new int[size];

    // Populate the values of the array declared in the heap
    // with the powers of 3 using the function provided above.
    for (int i = 0; i < size; i++) {
      *(ar + i) = get_power(i, 3);
    }

    // Print out both arrays.
    std::cout << "Stack array: ";
    print_array(array, size);
    std::cout << "Heap array: ";
    print_array(ar, size);

    return 0;
}
