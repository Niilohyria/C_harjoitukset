#include <stdio.h>

int main() {
    int luku;
    printf("Anna kokonaisluku: ");
    scanf("%d", &luku);

    if (luku % 2 == 0) {
        printf("%d on parillinen\n", luku);
    } else {
        printf("%d on pariton\n", luku);
    }
    return 0;
}