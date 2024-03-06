// Example_Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 


int Fact(int input)
{
    // Base case
    if (input == 0 || input == 1)
        return 1; 

       // General case 

    return input * Fact(input - 1);

}

int main()
{
    int input = 5; 

    int result = Fact(input);

    cout << result;
}

