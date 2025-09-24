#include <stdio.h>
void produitVectoriel(int u[3], int v[3], int resultat[3]) {
    resultat[0] = u[1]*v[2] - u[2]*v[1];
    resultat[1] = u[2]*v[0] - u[0]*v[2];
    resultat[2] = u[0]*v[1] - u[1]*v[0];
}
int main() {
    int u[3], v[3], res[3];
    int i;
    printf("Entrez les 3 composantes du vecteur U :\n");
    for (i = 0; i < 3; i++) {
        printf("U[%d] = ", i+1);
        scanf("%d", &u[i]);
    }
    printf("\nEntrez les 3 composantes du vecteur V :\n");
    for (i = 0; i < 3; i++) {
        printf("V[%d] = ", i+1);
        scanf("%d", &v[i]);
    }
    produitVectoriel(u, v, res);
    printf("\nProduit vectoriel U x V = ( %d , %d , %d )\n", res[0], res[1], res[2]);
    return 0;
}