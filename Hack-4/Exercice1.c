#include <stdio.h>

int sontInvOuOpp(double a, double b) {
    if ((a + b) == 0 || (a * b) == 1) {
        return 1; // Vrai
    } else {
        return 0; // Faux
    }
}

int main() {
    double num1, num2;
    printf("Entrez le premier nombre : ");
    scanf("%lf", &num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &num2);

    if (sontInvOuOpp(num1, num2)) {
        printf("Les nombres sont inverses ou opposés.\n");
    } else {
        printf("Les nombres ne sont ni inverses ni opposés.\n");
    }

    return 0;
}
