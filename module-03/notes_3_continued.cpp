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
using namespace std;

// bubble sorting of an array.
void function1();

int main() {
    function1();
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
