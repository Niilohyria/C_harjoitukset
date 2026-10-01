#include <stdio.h>

int main() {
    int summa = 0;
    for (int i = 1; i <= 10; i++) {
        summa += i;
    }
    printf("Summa 1-10 = %d\n", summa);
    return 0;
}
