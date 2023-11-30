#include <iostream>

int main() {
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)
    const double PI =3.14159;
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1321414;
    const int HEIGHT = 69420;
    const int PIZZA_WITH_RANCH_RATING_OUT_OF_10 = 10/10;

    std::cout << PIZZA_WITH_RANCH_RATING_OUT_OF_10 << " MILLION";

    return 0;

}