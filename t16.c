#include <stdio.h>

int main() {
    int luku;
    int summa = 0;
    printf("Syötä positiivisia lukuja (0 lopettaa):\n");
    while (1) {
        scanf("%d", &luku);
        if (luku == 0) break;
        if (luku > 0) summa += luku;
    }
    printf("Positiivisten lukujen summa = %d\n", summa);
    return 0;
}
