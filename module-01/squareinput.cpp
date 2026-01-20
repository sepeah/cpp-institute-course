/*
Takes input from user and outputs the square or root of the number
Demonstrates the concepts covered in module 1
*/

#include <cmath>
#include <iostream>

using namespace std;

int square(int);
float root(int);

int main(void)
{
    int usersnumber, squared, choice;
    

    cout << "Type a number:\n";
    cin >> usersnumber;
    cout << "Type 1 for root or 2 for square:\n";
    cin >> choice;
    if(choice == 2) {
        squared =square(usersnumber);
        cout << usersnumber << " squared is " << squared << endl;
    }
    else if(choice == 1) {
        float answer = root(usersnumber);
        cout << "The square root of " << usersnumber << " is " << answer << endl;
    }
    else {
        cout << "Invalid choice! Terminating procedure." << endl;
    }
    return 0;
}

int square(int number)
{
int answer;

answer = number * number;
return answer;

}

float root(int number)
{
    float answer;
    answer = sqrtf(number);
    return answer;
}