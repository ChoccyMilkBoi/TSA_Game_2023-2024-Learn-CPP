#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char User_Choice();
char Computer_Choice();
void Show_Choice(char User_RPS, char CPU_RPS);
void Choose_Winnner();
int main(){
    char User_RPS;
    char CPU_RPS;

    User_RPS = User_Choice();
    return 0;
}
char User_Choice(){
    char User_RPS;
    do{
    cout << "Please make a play: \n Rock (r) \n Paper (p) \n Scissors (s)" << endl;
    cin >> User_RPS;
    } while(User_RPS != 'r' && User_RPS != 'p' && User_RPS != 's');
        
    return User_RPS;
}
char Computer_Choice(char User_RPS, char CPU_RPS){

    return 0;
}
void Show_Choice(){

}
void Choose_Winner(){

}