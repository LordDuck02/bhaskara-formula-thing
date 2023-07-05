#include <iostream>
#include <cmath>

/*
I added some formulas for later use
Delta formula:
A = ?
B = ?
C = ?
▲ = B^2 - 4.A.C
X formula:
X' = -B + SQRT(▲) / 2
X'' = -B - SQRT(▲) / 2
*/
int main() {
    double a, b, c;
    std::cout << "Bhaskara's formula." << std::endl;
    std::cout << "Enter A, B, C in that order." << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    double delta = pow(b, 2) - 4 * a * c;
    if (delta > 0) {
        double x1 = (-b + std::sqrt(delta)) / (2 * a);
        double x2 = (-b - std::sqrt(delta)) / (2 * a);
        std::cout << "x' = " << x1 << std::endl;      // this won't display fractional results but I don't mind
        std::cout << "x'' = " << x2 << std::endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);
        std::cout << "The double root is: x = " << x << std::endl; // double root is x'' = x'
    } else {
        std::cout << "There are no real roots for this equation"; // if delta is less than zero
    }
    return 0;
}
