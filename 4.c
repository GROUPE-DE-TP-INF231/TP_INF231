#include <stdio.h>
int main() {
    int a, b;
    int i, produit = 0;
    printf("Entrer le premier entier naturel positif (a) : ");
    scanf("%d", &a);
    printf("Entrer le deuxieme entier naturel positif (b) : ");
    scanf("%d", &b);
    if (a < 0 || b < 0) {
        printf("Erreur : Les deux nombres doivent être naturels (positifs).\n");
        return 1;
    }
    for (i = 0; i < a; i++) {
        int j;
        for (j = 0; j < b; j++) {
            produit = produit + 1;
        }
    }
    printf("Le produit de %d et %d est : %d\n", a, b, produit);
    return 0;
}
