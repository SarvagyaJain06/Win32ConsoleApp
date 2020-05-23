// IfStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
    int iNum1, iNum2;
    cout << "Enter first number : " << endl;
    cin >> iNum1;
    cout << "Enter second number : " << endl;
    cin >> iNum2;
    if (iNum1 > iNum2)
    {
        cout << "Number 1 is greater"<<endl;
    }
    else if (iNum1 == iNum2)
    {
        cout << "Numbers are equal" << endl;
    }
    else {
        cout << "Number2 is greater"<<endl;
    }

    if ('a' > 'b')
    {
        cout << "a is greater than b" << endl;
    }
    else {
        cout << "b is greater than a" << endl;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
