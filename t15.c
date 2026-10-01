#include <stdio.h>

int main() {
    int luku;
    printf("Anna luku kertotaulua varten: ");
    scanf("%d", &luku);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", luku, i, luku * i);
    }
    return 0;
}
