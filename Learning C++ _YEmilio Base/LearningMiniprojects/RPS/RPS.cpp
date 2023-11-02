#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char User_Choice();
char Computer_Choice();
void Show_Choice(char User_RPS);
void Choose_Winner(char User_RPS, char CPU_RPSS);
char User_RPS;
char CPU_RPS;
int main(){
char Play_Again;
    do{
    User_RPS = User_Choice();
    Show_Choice(User_RPS);
    CPU_RPS = Computer_Choice();
    if (CPU_RPS = 'r'){
        cout << "The computer chose rock" << endl;
    } else if (CPU_RPS = 'p')
    {
        cout << "The computer chose paper" << endl;
    } else if (CPU_RPS = 's')
    {
        cout << "The computer chose scissors" << endl;
    }
    Choose_Winner(User_RPS, CPU_RPS);
    cout << "Would you like to play again?" << endl;
    do{
    cout << "Please input y/n " << endl;
    cin >> Play_Again;
    }while(Play_Again != 'y' && Play_Again != 'n');
    cin.clear();
    fflush(stdin);
    }while(Play_Again != 'n');
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
char Computer_Choice(){
    
    srand(time(0));
    int CPU_Int_RPS = rand() % 3 + 1;
    switch (CPU_Int_RPS)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }
    return 0;
}
void Show_Choice(char User_RPS){
    switch (User_RPS)
    {
    case 'r':
        cout << "You Chose Rock " << endl;
        break;
    case 'p' :
        cout << "You chose Paper " << endl;
        break;
    case 's' :
        cout << "You chose Scissors " << endl;
        break;
    default:
        break;
    }
}
void Choose_Winner(char User_RPS, char CPU_RPS){
    switch (User_RPS)
    {
    case 'r':
    
        switch (CPU_RPS)
        {
        case 'r':
            cout << "You tied with the computer" << endl;
            break;
        case 'p':
            cout << "You lost to the computer" << endl;
            break;
        case 's':
            cout << "You beat the compouter" << endl;
            break;
        }
        break;
    case 'p':
        switch (CPU_RPS)
        {
        case 'r':
            cout << "You beat the computer" << endl;
            break;
        case 'p':
            cout << "You tied with the computer" << endl;
            break;
        case 's':
            cout << "You lost to the compouter" << endl;
            break;
        }
        break;
    case 's':
        switch (CPU_RPS)
        {
        case 'r':
            cout << "You lost to the computer" << endl;
            break;
        case 'p':
            cout << "You beat the computer" << endl;
            break;
        case 's':
            cout << "You tied with the compouter" << endl;
            break;
        }
        break;
        break;
    }
}