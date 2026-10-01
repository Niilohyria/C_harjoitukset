#include <stdio.h>

int main() {
    int luku;
    printf("Syötä lukuja (0 lopettaa):\n");
    do {
        scanf("%d", &luku);
        if (luku != 0) {
            printf("Annoit: %d\n", luku);
        }
    } while (luku != 0);
    printf("Loppu.\n");
    return 0;
}
