#include <iostream>
/*
Include library iomanip to have the numbers limited to 2 decimal points.
*/
#include <bits/stdc++.h>
using namespace std;
// Global variable parking lot
void showBalance(float balance);
float deposit();
float withdraw(float balance);
int main(){
    // Main function variable parking lot
    float balance = 0;
    int choice = 0;
        do{
        cout << "=============================================================" << endl;
        cout << "Please make your choice" << endl;
        cout << "=============================================================" << endl;
        cout << "1. Show balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Quit out" << endl;
        cin >> choice;
        std::cin.clear();
        fflush(stdin);
        switch (choice)
            {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thank you for visiting, bye" << endl;
            break;
        default:
            cout << "Please input a valid number." << endl;
            break;
            }
    } while(choice != 4);



    return 0;
}
void showBalance(float balance){
    cout << "Your balance is: $" << setprecision(2) << fixed <<  balance << endl;
/*                              ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
? This code up here restircts the decimal count of the number to the 2nd decimal place */
}
float deposit(){
    float Depo_Amount = 0;

    cout << "How much would you like to deposit?" << endl;
    cin >> Depo_Amount;

    if(Depo_Amount > 0){
        return Depo_Amount;
    } else {
        cout << "That is not a valid deposit amount:";
        return 0;
    }
}
float withdraw(float balance){
    float Withdraw_Amount = 0;

    cout << "Enter how much you would like to withdraw: ";
    cin >> Withdraw_Amount;
    

    if(Withdraw_Amount > 0){
        return Withdraw_Amount;
    } else if (Withdraw_Amount > balance) {
        cout << "Insufficient funds, try again." << endl;
        return 0;
    } else {
        cout << "Please input a valid deposit amount";
        return 0;
    }
    return 0;
}