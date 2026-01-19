
/* 
A file for testing C++ features as they come along in the material of 
C++ Essentials 1 – Edube Interactive
https://cppinstitute.org/cpp-essentials-1


The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>

int main() { // main function - execution starts here
    int Number = 66; // setting a variable of int type and value 64
    char character = '*'; // setting a variable of char type and value '*'
    character = 65; // char can also be assigned an integer value representing ASCII code, in this case 'A'
    
    Number = Number + 1 - 1 ; // addition and subtraction
    Number = Number + 5E2; // scientific notation for 500
    std::cout << "Number is: " << Number << std::endl; //basic output
    
    int i, j, k;
    float x, y, z; //setting float variables

    i = 10; 
    j = 12;
    k = i * j; //   multiplication
    x = 1.25; 
    y = 0.5 / 2; // division
    z = x * y;
    i = j % i;  // modulus operator
    std::cout << "z is: " << z << std::endl;
    std::cout << "i is: " << i << std::endl;
    j = 2 * i++; // post-increment
    i = 2 * --j; // pre-decrement
    std::cout << "j is: " << j << std::endl;
    std::cout << "i is: " << i << std::endl;
    std::cout << "\a This is a bell character!" << std::endl; // alert/bell character    

    int counter = 0;
    if(counter < 5) std::cout << "It's less than 5" << std::endl; // if statement

    return 0; // indicate that program ended successfully

}