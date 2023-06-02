#include <stdio.h>

#define MAX_TAILLE 100

int existeInvOuOppConsecutifs(double T[], int taille) {
    int i;
    for (i = 0; i < taille - 1; i++) {
        if ((T[i] + T[i + 1]) == 0 || (T[i] * T[i + 1]) == 1) {
            return 1; // Vrai
        }
    }
    return 0; // Faux
}

int main() {
    double tableau[MAX_TAILLE];
    int taille, i;

    printf("Entrez la taille du tableau (maximum %d) : ", MAX_TAILLE);
    scanf("%d", &taille);

    printf("Entrez les valeurs du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("Valeur %d : ", i + 1);
        scanf("%lf", &tableau[i]);
    }

    if (existeInvOuOppConsecutifs(tableau, taille)) {
        printf("Le tableau contient deux nombres consécutifs opposés ou inverses.\n");
    } else {
        printf("Le tableau ne contient pas deux nombres consécutifs opposés ou inverses.\n");
    }

    return 0;
}
