/* 
A file for testing C++ features as they come along in the material of 
C++ Essentials 1 – Edube Interactive. module 2, part 2/2
https://cppinstitute.org/cpp-essentials-1


The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>



// switch statement example
void function1();

// array, matrix
int function2();

int main() {

    function1();
    std::cout << "function2 returns: " << function2() << std::endl;
    return 0;
}

void function1() {

    int i;
    std::cout << "Enter a number between 1 and 4: ";
    std::cin >> i;

    switch(i) {
    case 1: std::cout << "Only one?" << std::endl; break;
    case 2: std::cout << "I want more" << std::endl; break;
    case 3: 
    case 4: std::cout << "OK" << std::endl; break;
    default: std::cout << "Don't care"  << std::endl;
    }
}

int function2() {
    
    int numbers[5] = {10, 20, 30, 40, 50};
    char surname[4] = {'F', 'u', 'r', 'y'};

    // chessboard representation with 2D array, counts and returns number of rooks placed
    int chessboard[8][8] = {}; // Initialize all elements to 0 with = {}, otherwise contains garbage
    const int ROOK = 1;
    chessboard[0][0] = ROOK;
    chessboard[0][7] = ROOK;
    chessboard[7][0] = ROOK;
    chessboard[7][7] = ROOK;
    int rooks_sum = 0;
    for (int counter = 0;counter<8;counter++)
        for (int counter2 = 0;counter2<8;counter2++)
            if (chessboard[counter][counter2]==ROOK) rooks_sum++;

    return rooks_sum;
}
