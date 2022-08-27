// NamishCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    string userName;
    int keyTyped;
    cout << "Welcome to NamishCalculator. May I know your name? \n";
    cin >> userName;
    cout << "Welcome to NamishCalculator " + userName + " ! Please press 1 to add two numbers, 2 to subtract, 3 to multiply and 4 to divide!" << endl;
    cin >> keyTyped;
    if (keyTyped == 1) {
        cout << "Thanks " + userName + " !" + "\n";
        int firstNumber;
        cout << "Please enter your first number\n";
        cin >> firstNumber;
        int secondNumber;
        cout << "Please enter your second number\n";
        cin >> secondNumber;
        int sum = firstNumber + secondNumber;
        cout << "The sum of " << firstNumber << " and " << secondNumber << " is " << sum;
    }
    else if (keyTyped == 2) {
        cout << "Thanks " + userName + " !" + "\n";
        int firstNumber;
        cout << "Please enter your first number\n";
        cin >> firstNumber;
        int secondNumber;
        cout << "Please enter your second number\n";
        cin >> secondNumber;
        int sum = firstNumber - secondNumber;
        cout << "The difference between " << firstNumber << " and " << secondNumber << " is " << sum;
    }
    else if (keyTyped == 3) {
        cout << "Thanks " + userName + " !" + "\n";
        int firstNumber;
        cout << "Please enter your first number\n";
        cin >> firstNumber;
        int secondNumber;
        cout << "Please enter your second number\n";
        cin >> secondNumber;
        int sum = firstNumber * secondNumber;
        cout << "The product of " << firstNumber << " and " << secondNumber << " is " << sum;
    }
    else if (keyTyped == 4) {
        cout << "Thanks " + userName + " !" + "\n";
        int firstNumber;
        cout << "Please enter your first number\n";
        cin >> firstNumber;
        int secondNumber;
        cout << "Please enter your second number\n";
        cin >> secondNumber;

        if (secondNumber == 0) {
            cout << "Division by zero is not allowed! Please try again!";
        }
        else {
            double sum = firstNumber / secondNumber;
            cout << firstNumber << " divided by " << secondNumber << " is " << sum;
        }
    }
    else if (keyTyped == 5) {

    }
    else if (keyTyped == 6) {

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
