#include <stdio.h>

int main() {
    int pisteet;
    printf("Anna arvosana 0-5: ");
    scanf("%d", &pisteet);

    if (pisteet < 0 || pisteet > 5) {
        printf("Virhe\n");
    } else if (pisteet == 5) {
        printf("Erinomainen\n");
    } else if (pisteet == 4) {
        printf("Kiitettävä\n");
    } else if (pisteet == 3) {
        printf("Hyvä\n");
    } else if (pisteet == 2) {
        printf("Tyydyttävä\n");
    } else if (pisteet == 1) {
        printf("Välttävä\n");
    } else {
        printf("Hylätty\n");
    }
    return 0;
}
