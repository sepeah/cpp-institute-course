
/* 
A file for testing C++ features as they come along in the material of 
C++ Essentials 1 – Edube Interactive. module 2
https://cppinstitute.org/cpp-essentials-1


The result will likely be a nonsensical mix of code snippets
*/

#include <iostream>

// conditional statements, if, else, else if, nesting, cascades
void function1(); 

// types
int function2();


int main(void)
{
    function1();
    std::cout << "function2 returns: " << function2() << std::endl;

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

    return pieceofpi;
}