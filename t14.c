#include <stdio.h>

int main() {
    double a, b, c;
    printf("Anna kolme lukua: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double suurin = a;
    if (b > suurin) suurin = b;
    if (c > suurin) suurin = c;

    printf("Suurin luku on %.2f\n", suurin);
    return 0;
}
