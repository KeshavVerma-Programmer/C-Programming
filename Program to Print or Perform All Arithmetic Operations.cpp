#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
        cout << "Modulus: " << num1 % num2 << endl;
    }
    else {
        cout << "Cannot perform division and modulus operation as second number is zero." << endl;
    }
    cout << "Increment of first number: " << ++num1 << endl;
    cout << "Decrement of second number: " << --num2 << endl;
    return 0;
}
