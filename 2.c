#include <stdio.h>
int main() {
    int m1, n1, m2, n2;
    int i, j, k;
    int A[50][50], B[50][50], C[50][50]; 
    printf("Entrez le nombre de lignes de la matrice A : ");
    scanf("%d", &m1);
    printf("Entrez le nombre de colonnes de la matrice A : ");
    scanf("%d", &n1);
    printf("Entrez le nombre de lignes de la matrice B : ");
    scanf("%d", &m2);
    printf("Entrez le nombre de colonnes de la matrice B : ");
    scanf("%d", &n2);
    if (n1 != m2) {
        printf("\n Erreur : le produit n'est possible que si colonnes(A) = lignes(B).\n");
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
            for (j = 0; j < n2; j++) {
                C[i][j] = 0;
            }
        }
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                for (k = 0; k < n1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        printf("\n--- Produit des matrices (C = A × B) ---\n");
        for (i = 0; i < m1; i++) {
            for (j = 0; j < n2; j++) {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}