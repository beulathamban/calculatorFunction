// calculatorFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Function Prototype
void line();
void AddNumbers();
void SubtractNumbers();
void MultiplyNumbers();
void DivideNumbers();


int main()
{

    AddNumbers();
    SubtractNumbers();
    MultiplyNumbers();
    DivideNumbers();
}

void line() {
    cout << "\n******************\n";
}



void AddNumbers() {
    float number1, number2, result;
    cout << "\nAddition";
    line();
    cout << "\nEnter number1: ";
    cin >> number1;
    cout << "\nEnter number2: ";
    cin >> number2;
    result = number1 + number2;
    cout << "\nThe sum of the two given numbers is: " << result <<endl<<endl;
}

void SubtractNumbers() {
    float number1, number2, result;
    cout << "\nSubtraction";
    line();
    cout << "\nEnter number1: ";
    cin >> number1;
    cout << "\nEnter number2: ";
    cin >> number2;
    result = number1 - number2;
    cout << "\nThe difference of the two given numbers is: " << result << endl<<endl;
}


void MultiplyNumbers() {
    float number1, number2, result;
    cout << "\nMultiplication";
    line();
    cout << "\nEnter number1: ";
    cin >> number1;
    cout << "\nEnter number2: ";
    cin >> number2;
    result = number1 * number2;
    cout << "\nThe product of the two given numbers is: " << result << endl<<endl;
}


void DivideNumbers() {
    float number1, number2, result;
    cout << "\nDivision";
    line();
    cout << "\nEnter number1: ";
    cin >> number1;
    cout << "\nEnter number2: ";
    cin >> number2;
    if (number2 != 0) {
        result = number1 / number2;
        cout << "\nThe difference of the two given numbers is: " << result << endl;
    }
    else {
        cout << "\nSorry the number2 is equal to zero, so division overflow, try a different number."<<endl<<endl;
    }
}