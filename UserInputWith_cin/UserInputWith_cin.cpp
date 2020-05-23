// UserInputWith_cin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string sName;
    cout <<"Enter your name : ";
    cin >> sName;
    cout << "Hi " + sName << ", We welcome you !!" << endl;

    int iNum1, iNum2;
    cout << "Enter first number : ";
    cin >> iNum1;
    cout << "Enter second number : ";
    cin >> iNum2;
    cout << "Sum is : " << iNum1 + iNum2<<endl;

    float fNum1, fNum2;
    cout << "Enter first number : ";
    cin >> fNum1;
    cout << "Enter second number : ";
    cin >> fNum2;
    cout << "Sum is : " <<(int) fNum1 + (int)fNum2 << endl;

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
