
/*
 * Author: Sepe Ahtosalo
 * Date: January 29, 2026
 * A file for testing C++ features as they come along in the material of 
 * C++ Essentials 1 – Edube Interactive. module 3
 * https://cppinstitute.org/cpp-essentials-1


 *The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>

using namespace std;

// Global variable declaration
int globalvar = 1;

// pointers
void function1();

//sizeof operator
int funtion2();

//more on pointers, arrays
void function3();

//using function parameters
void function4(unsigned short x, char c);

//modifying parameters by reference, global variables and side-effects
void function5(int &refVar);

//modifying a value in pointer (C-style)
void function6(int * ptr);

int main() {
    function1();
    funtion2();
    function3();
    function4(5,'#');
    int a = 10;
    cout << "Before function5, a = " << a << ", global counter = " << globalvar << endl;
    function5(a);
    cout << "After function5, a = " << a << ", global counter = " << globalvar << endl;
    int pointervalue = 0;
    int * pointer = & pointervalue;
    function6(pointer);
    cout << "After function6, pointervalue = " << pointervalue << endl; 

    
    return 0;
}

void function1() {
int number;
int *pointer;   
number = 42;
pointer = &number; // pointer now holds the address of number variable


cout << "Address: " << pointer << endl;
cout << "Value of number in address: " << *pointer << endl;
int *nullpointer = nullptr; // null pointer initialization
}


int funtion2() {
// Displays sizes of fundamental data types
    cout << "Size of char: " << sizeof(char) << " bytes\n"; 
    cout << "Size of bool: " << sizeof(bool) << " bytes\n"; 
    cout << "Size of short: " << sizeof(short) << " bytes\n"; 
    cout << "Size of int: " << sizeof(int) << " bytes\n"; 
    cout << "Size of long: " << sizeof(long) << " bytes\n"; 
    cout << "Size of long long: " << sizeof(long long) << " bytes\n"; 
    cout << "Size of float: " << sizeof(float) << " bytes\n"; 
    cout << "Size of double: " << sizeof(double) << " bytes\n"; 
    cout << "Size of long double: " << sizeof(long double) << " bytes\n"; 
    cout << "Size of void*: " << sizeof(void*) << " bytes\n"; 
    cout << sizeof(int* ) << " bytes for pointers in general" << endl;
    return 0; 
}

void function3() {
    int array1[] = {1,2,3,4,5};
    int *pointer1, *pointer2, *pointer3;
    pointer1 = array1;
    pointer2 = pointer1+ 1;
    pointer3 = pointer1 + 2;
    cout << "First element: " << *pointer1 << endl;
    cout << "Second element: " << *pointer2 << endl;
    cout << "Third element: " << *pointer3 << endl;
}

void function4(unsigned short x,char c){
    // prints a row of x characters c
    for (int i=0;i<x;i++)
    cout << c;
    cout << endl;
}  

void function5(int &refVar) {
    refVar += 4 + globalvar;
    cout << "Inside function5, refVar = " << refVar << endl;
    globalvar++;

}

void function6(int * ptr) {
    * ptr = * ptr + 1;
}