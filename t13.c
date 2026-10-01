#include <stdio.h>

int main() {
    double a, b, c;
    printf("Anna kolme lukua: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double keskiarvo = (a + b + c) / 3.0;
    printf("Keskiarvo = %.2f\n", keskiarvo);
    return 0;
}
