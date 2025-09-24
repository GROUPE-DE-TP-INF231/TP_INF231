#include <stdio.h>

#define MAX 100
int rechercheSequentielle(int tableau[], int taille, int valeurRecherchee) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == valeurRecherchee) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    do {
        printf("Entrez la taille du tableau (inferieure a 100) : ");
        scanf("%d", &n);

        if (n >= MAX) {
            printf("Erreur : la taille doit etre inferieure a 100 !\n");
        }
    } while (n >= MAX || n <= 0);
     int tableau[MAX];
    printf("\nEntrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    int valeur;
    printf("\nEntrez la valeur a rechercher : ");
    scanf("%d", &valeur);
    int resultat = rechercheSequentielle(tableau, n, valeur);
    if (resultat != -1) {
        printf("La valeur %d a ete trouvee a l'indice %d.\n", valeur, resultat);
    } else {
        printf("La valeur %d n'est pas presente dans le tableau.\n", valeur);
    }

    return 0;
}
