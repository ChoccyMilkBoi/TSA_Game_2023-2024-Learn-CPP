#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//? All of these functions do technically have the same name, however since they have different variables and are 
//? of the same name, the function won't be overloaded as the differing integrated variables cause for them to be 
//? unique and not cause an overload.
void Bake_Pizza();
void Bake_Pizza(string topping1);
void Bake_Pizza(string topping1, string topping2);
int main(){
    string topping1;
    string topping2;
    int toppingCT;
    // Variable parking lot

    do{
    cout << "How many toppings would you like on your pizza? (0-2) ";
    cin >> toppingCT;
        switch (toppingCT)
        {
        case 0:
            Bake_Pizza();
            break;
        case 1:
            cout << "What topping would you like on your pizza? ";
            cin >> topping1;
            Bake_Pizza(topping1);
            break;
        case 2:
            cout << "What will your first topping be? ";
            cin >> topping1;
            cout << "What will your second topping be? ";
            cin >> topping2;
        Bake_Pizza(topping1, topping2);

            break;
        default:
            cout << "Please input a number between 0-2" << endl;
            break;
        }
    } while (toppingCT > 2 && toppingCT < 0);

}
void Bake_Pizza(){
    cout << "Here's your pizza!" << endl;
}
void Bake_Pizza(string topping1){
    cout << "Here's your " << topping1 << " pizza!" << endl;
}
void Bake_Pizza(string topping1, string topping2){
    cout << "Here's your " << topping1 << " and " << topping2 << " pizza!"<< endl;
}