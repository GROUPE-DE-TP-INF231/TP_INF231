#include <stdio.h>
#define MAX 50 
int main() {
    int n, m, i, j;
    int vect[MAX], mat[MAX][MAX], res[MAX];
    printf("=== Produit Vecteur x Matrice ===\n");
    printf("Entrez le nombre de colonnes du vecteur (et lignes de la matrice) : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &m);
    printf("\n--- Saisie du vecteur (%d elements) ---\n", n);
    for (i = 0; i < n; i++) {
        printf("V[%d] = ", i);
        scanf("%d", &vect[i]);
    }
    printf("\n--- Saisie de la matrice (%d x %d) ---\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (j = 0; j < m; j++) {
        res[j] = 0;
        for (i = 0; i < n; i++) {
            res[j] += vect[i] * mat[i][j];
        }
    }
    printf("\n=== Resultat : V x M ===\n");
    printf("[ ");
    for (j = 0; j < m; j++) {
        printf("%d ", res[j]);
    }
    printf("]\n");
    return 0;
}
