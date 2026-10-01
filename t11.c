#include <stdio.h>

int nelio(int luku) {
    return luku * luku;
}

int main() {
    int luku2 = 7;
    printf("Nelio(%d) = %d\n", luku2, nelio(luku2));
    return 0;
}
