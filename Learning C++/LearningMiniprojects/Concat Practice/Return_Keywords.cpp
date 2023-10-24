#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string ConcatStrings(string First_Name, string Last_Name);
int main(){
    // Variable parking lot
    string First_Name;
    string Last_Name;
    string Full_Name;

    cout << "What's your first name? ";
    cin >> First_Name;
    cout << "What's your last name? ";
    cin >> Last_Name;
    Full_Name = ConcatStrings(First_Name, Last_Name);
    cout << "Hello " << Full_Name << endl;
    return 0;
}
string ConcatStrings(string First_Name, string Last_Name){
    return First_Name + " " + Last_Name;
}