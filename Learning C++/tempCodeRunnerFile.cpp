#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    string name;

    do{
        cout << "Enter ur name: ";
        getline(cin, name);
    }while(name.empty());

    cout << "Hello " << name << '\n';

    return 0;
}