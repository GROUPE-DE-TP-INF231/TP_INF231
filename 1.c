#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    int i, j;
    int A[50][50], B[50][50], C[50][50]; 
    printf("Entrez le nombre de lignes de la matrice A : ");
    scanf("%d", &m1);
    printf("Entrez le nombre de colonnes de la matrice A : ");
    scanf("%d", &n1);
    printf("Entrez le nombre de lignes de la matrice B : ");
    scanf("%d", &m2);
    printf("Entrez le nombre de colonnes de la matrice B : ");
    scanf("%d", &n2);
    if (m1 != m2 || n1 != n2) {
        printf("\n Erreur : la somme n'est possible que si les deux matrices ont la même dimension.\n");
    } else {
        printf("\n--- Saisie de la matrice A ---\n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                printf("A[%d][%d] = ", i, j);
                scanf("%d", &A[i][j]);
            }
        }
        printf("\n--- Saisie de la matrice B ---\n");
        for (i = 0; i < m2; i++) {
            for (j = 0; j < n2; j++) {
                printf("B[%d][%d] = ", i, j);
                scanf("%d", &B[i][j]);
            }
        }
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        printf("\n--- Somme des matrices (C = A + B) ---\n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n1; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}