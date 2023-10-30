#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Declare Variables here first
float Tesseract(float length);
float Square(float length);
float Cube(float length);
void Name_And_Age(std::string name, int age);
int main(){
    // Variable parking lot
    string name;

    int age;
    cout << "Whats your name?" << '\n';
    cin >> name;
    cout << "Whats your age?" << '\n';
    cin >> age;
    Name_And_Age(name, age);
    float length;
    float Square_Area = Square(length);
    float Cube_Vol = Cube(length);
    float Tesseract_Vol = Tesseract(length);
    cout << "Lets make a square AND a cube!";
    cout << "Whats the side length of your square/cube? ";
    cin >> length;
    cout << "The area of a square with side lengths of " << length << " is " << Square_Area << '\n';
    cout << "The volume of a cube with side lengths of " << length << " is " << Cube_Vol << '\n';
    cout << "The volume of a tesseract with side lengths of " << length << " is " << Tesseract_Vol << '\n';
}
// Define Vabriables here
float Square(float length){
    return length * length;
}
float Cube(float length){
    return length * length * length;
}
float Tesseract(float length){
    return length * length * length * length;
}
void Name_And_Age(std::string name,int age){
    cout << "So your name is " << name;
    cout << " and you are " << age << " years old" << '\n' ; 
}