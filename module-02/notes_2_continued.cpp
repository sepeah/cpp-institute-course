/* 
A file for testing C++ features as they come along in the material of 
C++ Essentials 1 – Edube Interactive. module 2, part 2/2
https://cppinstitute.org/cpp-essentials-1


The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>

int i;

// switch statement example
void function1();

int main() {

    function1();
    
    return 0;
}

void function1() {

    std::cout << "Enter a number between 1 and 4: ";
    std::cin >> i;

    switch(i) {
    case 1: std::cout << "Only one?" << std::endl; break;
    case 2: std::cout << "I want more" << std::endl; break;
    case 3: 
    case 4: std::cout << "OK" << std::endl; break;
    default: std::cout << "Don't care"  << std::endl;
    }
