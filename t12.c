#include <stdio.h>

int tuplaa(int luku) {
    return luku * 2;
}

int main() {
    int luku2 = 6;
    printf("Tuplaa(%d) = %d\n", luku2, tuplaa(luku2));
    return 0;
}
