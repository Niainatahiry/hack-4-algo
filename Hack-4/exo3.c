#include <stdio.h>

#define MAX_TAILLE 100

int nbInvOuOpp(double T[], int taille) {
    int count = 0;
    int i,j;
    for (i = 0; i < taille - 1; i++) {
        for ( j = i + 1; j < taille; j++) {
            if ((T[i] + T[j]) == 0 || (T[i] * T[j]) == 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    double tableau[MAX_TAILLE];
    int taille,i;

    printf("Entrez la taille du tableau (maximum %d) : ", MAX_TAILLE);
    scanf("%d", &taille);

    printf("Entrez les valeurs du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("Valeur %d : ", i + 1);
        scanf("%lf", &tableau[i]);
    }

    int nombrePaires = nbInvOuOpp(tableau, taille);

    printf("Le nombre de paires d'indices (i, j) où T[i] et T[j] sont opposés ou inverses est : %d\n", nombrePaires);

    return 0;
}
