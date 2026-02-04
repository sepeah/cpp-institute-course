
/* 
A file for testing C++ features as they come along in the material of 
C++ Essentials 1 – Edube Interactive. module 2, part 1/2
https://cppinstitute.org/cpp-essentials-1


The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>

// conditional statements, if, else, else if, nesting, cascades
void function1(); 

// types
int function2();

// while loops
int function3();

// do loops
void function4();

// for loops
int function5();

// break and continue
int function6();

// bitwise operators
int function7();

int main(void) {
    function1();
    std::cout << "function2 returns: " << function2() << std::endl;
    std::cout << "function3 looping...\n" << function3() << " LOOPS!" << std::endl;
    function4();
    function5();
    function6();
    std::cout<<function7()<<" musketeers found"<<std::endl;
    return 0;
}

void function1() {
    int var1 = 1, var2 = 2;
    if (var1 >= var2)
        if (var1 == var2)
            std::cout << "var1 is equal to var2" << std::endl;
        else    
        std::cout << "var1 is greater than var2" << std::endl;
    else if (var2>var1)
        std::cout << "var2 is greater than var1" << std::endl;
    else
        std::cout << "There's something fishy with the values" << std::endl;

}

int function2() {
    short small = 10;
    unsigned short smallpositive = 20;
    int regular = 1000;
    long large = 100000;
    long long verylarge = 1000000000;
    long double pieceofpi = 3.1415926535897932384626433;
    bool truthvalue = true;

    return pieceofpi; // returns 3
}

int function3() {

    int howmuch = 4, counter = 0;

    while(counter < howmuch) {
        std::cout << "LOOP" << std::endl;
        counter += 1;
    }
    return counter;

}

void function4() {
    int number = 3;
    do {
        function1();
        number--;
    }
    while(number > 0);

}

int function5() {
    for(int i = 0; i < 5; i++) {
        std::cout << "For Loop iteration: " << i << std::endl;
    }
    return 0;
}

int function6() {
    for(int i = 0; i < 10; i++) {
        if(i == 3) {
            std::cout << "Skipping 3" << std::endl;
            continue;
        }
        if(i == 7) {
            std::cout << "Breaking at 7" << std::endl;
            break;
        }
        std::cout << "i is: " << i << std::endl;
    }
    return 0;
}   

int function7() {
    int binary1, binary2, result;
    binary1 = 0b1010;
    binary2 = 0b0111;
    result = binary1 & binary2; // bitwise AND (1010 & 0111 = 0010)
    result = result | binary2; // bitwise OR (0010 | 0111 = 0111)
    result = result ^ binary1; // bitwise XOR (0111 ^ 1010 = 1101)
    result = ~result & 0xF; // bitwise NOT masked to 4 bits (~1101 & 1111 = 0010)
    result = result << 2; // left shift (0010 << 2 = 1000)
    result = result >> 1; // right shift (1000 >> 1 = 0100) 
    return result; // returns 4





}