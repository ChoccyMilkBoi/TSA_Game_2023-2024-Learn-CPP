#include <iostream>
#include <cmath>

int main(){
    using std::cout;
    using std::cin;
    using std::string;

    string dummy;
    double num1;
    char operation;
    double num2;
    double answer;

    cout << "Enter #1: ";
    cin >> num1;
    cout << "Enter #2: ";
    cin >> num2;
    cout << "Enter the operation you are going to do, pick from " << '\n';
    cout << "^ (Exponents)" << '\n'; 
    cout << "* (Multiplication)" <<'\n';
    cout << "/ (Division)" << '\n';
    cout << "+ (Addition)" << '\n';
    cout << "- (Subtraction)" << '\n';
    cin >> operation;
    switch(operation) {
        case '^' :
            cout << num1 << "^" << num2 << " = " << pow(num1, num2) << '\n';
        break;
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
        break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
        break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';
        break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';
        break;
        default:
            cout << "Error, please enter a valid operation from the list." << '\n';
    }
    cout << '\n' << "Please do any character or string then press enter to close out  of the calculator.";
    cin >> dummy;
    cout << "Buh bye :D!" << '\n';
    return 0;
}