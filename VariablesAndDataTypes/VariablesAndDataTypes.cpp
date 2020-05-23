// VariablesAndDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int number1 = 8;
    int number2 = 9;
    string name = "Mohan";
    string surname = "Radhe";
    float fnumber1 = 9.05f;
    float fnumber2 = 9.08f;
    double dnumber1 = 9.005;
    double dnumber2 = 9.008;

    cout << number1 + number2 << endl;
    cout << name + surname << endl;
    cout << fnumber1 + fnumber2 << endl;
    cout << dnumber1 + dnumber2 << endl;
    cout << number1 + fnumber1 <<endl;
    cout << fnumber1 + number1 << endl;
    cout << dnumber1 + fnumber1 << endl;
    cout << fnumber1 + dnumber1 << endl;


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
