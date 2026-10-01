#include <stdio.h>

int main() {
    char nimi[50];
    int ikä;

    printf("Anna etunimi: ");
    scanf("%s", nimi);

    printf("Anna ikä: ");
    scanf("%d", &ikä);

    printf("Hei %s, olet %d-vuotias!\n", nimi, ikä);
    return 0;
}
