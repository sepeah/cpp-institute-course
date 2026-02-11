/*
 * Author: Sepe Ahtosalo
 * Date: February 10, 2026
 * A program for testing C++ features - function call overhead
 * Overhead was discussed in:
 * C++ Essentials 1 – Edube Interactive. 3.7.1.2
 * https://cppinstitute.org/cpp-essentials-1
 * 
 * The result shows ~2x slowdown as cost of the 
 * call/return mechanism vs. direct execution. 
 * Added function2 with the inline keyword, to test for 
 * compiler optimizations.
 * In most runs, inlining seems to lead to the worst performance.
*/

#include <iostream>
#include <chrono>

int function1(int number) {
    number = number + 45;
    return number;
}

inline int function2(int number) {
    number = number + 45;
    return number;
}


int main() {
    // Measure time taken by function1
    auto start = std::chrono::high_resolution_clock::now();
    
    int counter = 0;
    int number = 2;
    while(counter<250000) {
        number = function1(number);
        counter += 1;
    }
    std::cout << "result:" << number << std::endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Function took: " << duration.count() << " microseconds" << std::endl;
    

    // Measure time taken by direct calculation
    auto start2 = std::chrono::high_resolution_clock::now();
    
    int counter2 = 0;
    int number2 = 2;
    while(counter2<250000) {
        number2 = number2 + 45;
        counter2 += 1;
    }
    std::cout << "result:" << number2 << std::endl;
    auto end2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(end2 - start2);
    std::cout << "Without function calls the calculation took: " << duration2.count() << " microseconds" << std::endl;

    // Measure time taken by function2 (with inline)
    auto start3 = std::chrono::high_resolution_clock::now();

    int counter3 = 0;
    int number3 = 2;
    while(counter3<250000) {
        number3 = function2(number3);
        counter3 += 1;
    }

    std::cout << "result:" << number3 << std::endl;
    auto end3 = std::chrono::high_resolution_clock::now();
    auto duration3 = std::chrono::duration_cast<std::chrono::microseconds>(end3 - start3);
    std::cout << "With inline keyword the function took: " << duration3.count() << " microseconds" << std::endl;

    return 0;
}