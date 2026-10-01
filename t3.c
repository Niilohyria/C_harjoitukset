#include <stdio.h>

int main() {
    int lämpo;
    printf("Anna lämpotila: ");
    scanf("%d", &lämpo);

    if (lämpo > 0)
        printf("Ei pakkasta\n");
    else
        printf("Pakkasta\n");

    return 0;
}