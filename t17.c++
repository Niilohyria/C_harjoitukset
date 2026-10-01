#include <iostream>
#include <string>

int main() {
    std::string nimi;
    int ikä;
    std::cout << "Anna nimesi: ";
    std::cin >> nimi;
    std::cout << "Anna ikäsi: ";
    std::cin >> ikä;
    std::cout << "Hei " << nimi << ", olet " << ikä << " vuotta.\n";
    return 0;
}
