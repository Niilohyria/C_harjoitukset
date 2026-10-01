#include <iostream>

int summa(int a, int b) {
    return a + b;
}

double summa(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "summa(2,3) = " << summa(2,3) << "\n";
    std::cout << "summa(2.5,3.1) = " << summa(2.5,3.1) << "\n";
    return 0;
}
