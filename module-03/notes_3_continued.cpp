/*
 * Author: Sepe Ahtosalo
 * Date: February 11, 2026
 * A file for testing C++ features as they come along in the material of 
 * C++ Essentials 1 – Edube Interactive. module 3, 2/2
 * https://cppinstitute.org/cpp-essentials-1
 * 
 *The result will likely be a nonsensical mix of code snippets
*/



#include <iostream>
#include <vector>
using namespace std;

// bubble sorting of an array.
void function1();

// new, delete, dynamic memory allocation
void function2();

// using std::vector for dynamic arrays. push_back, range-based for loop
void function3();


int main() {
    function1();
    function2();
    function3();
    return 0;
}

void function1() {
    bool swapped;
    int temp;
    int arr1[6] = {5, 27, 9, 12, 5, 6};

    do {   
        swapped = false;
        for(int i=0;i<5;i++){
            if(arr1[i]>arr1[i+1]) {
                swapped = true;
                temp = arr1[i];
                arr1[i] = arr1[i+1];
                arr1[i+1] = temp;
            }
        }
    } while (swapped);
    
    cout << "sorted array: ";
    for(int i = 0;i<6;i++)
        cout << arr1[i] << " ";
    cout << endl;
}

void function2() {
    // Example for using new, delete - dynamic memory allocation
    int* ptr = new int[5];  // allocates an array of 5 integers

    for(int i = 0; i < 5; i++) {
        ptr[i] = i * 10;  // initialize array elements
    }

    cout << "Dynamically allocated raw array: ";
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    delete[] ptr;  // free the dynamically allocated memory
}

void function3() {
    std::vector<int> arr;

    for (int i = 0; i < 5; i++) {
        arr.push_back(i * 10);
    }

    cout << "Dynamically allocated array using vector: ";
    for (int value : arr) {
        cout << value << " ";
    }
    std::cout << std::endl;
}
