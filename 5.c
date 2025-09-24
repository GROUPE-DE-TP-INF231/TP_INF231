#include <stdio.h>

int main() {
    int n, i;
    int m = 1; 
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("La taille du tableau doit être positive.\n");
        return 1;
    }
    int tab[n];
    printf("Entrez les elements du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }
    for (i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            m = 0; 
            break;      
        }
    }
    if (m == 1) {
        printf("Le tableau est trie en ordre croissant.\n");
    } else {
        printf("Le tableau n'est pas trie.\n");
    }
    return 0;
}