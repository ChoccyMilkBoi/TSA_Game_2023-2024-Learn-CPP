#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double hypotenuse1;


    std::cout << "Please put in the length of the first side of your triangle. ";
    std::cin >> a;
    std::cout << "Please put in the length of the second side of your triangle. ";
    std::cin >> b;
    a = pow(a, 2);
    b = pow(b, 2);
    hypotenuse1 = sqrt(a + b);
    std::cout << "The hypotenuse of your triangle is: " << hypotenuse1 << '\n';


    return 0;
}