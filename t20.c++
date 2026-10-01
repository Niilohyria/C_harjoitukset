#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 5, 8, 13};
    for (int x : v) {
        std::cout << x << "\n";
    }
    return 0;
}
