#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    srand(time(NULL));
    int Rand_Num = (rand() % 100)+1;
    cout << "Guess the number 1-100: ";
    int Guess;
    int Guess_Count;
    do{
        cin >> Guess;
        if(Guess < Rand_Num){
            cout << "Too Low!" << '\n';
            Guess_Count++;
        } else if(Guess > Rand_Num){
            cout << "Too high" << '\n';
            Guess_Count++;
        } else if(Guess == Rand_Num){
            cout << "Good job, you got the answer in " << Guess_Count << " tries, the number was " << Rand_Num;
        }
    }while(Guess != Rand_Num);   
}