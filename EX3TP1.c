#include <stdio.h>
#define MAX 100
void SaisirMatrice(int *l, int *c, int MAT[][MAX]) {
    printf("Saisir le nombre de lignes : ");
    scanf("%d", l);
    printf("Saisir le nombre de colonnes : ");
    scanf("%d", c);

    for(int i = 0; i < *l; i++)
        for(int j = 0; j < *c; j++) {
            printf("MAT[%d][%d] = ", i, j);
            scanf("%d", &MAT[i][j]);
        }
}
void AfficherMatrice(int l, int c, int MAT[][MAX]) {
    printf("Matrice :\n");
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d\t", MAT[i][j]);
        }
        printf("\n");
    }
}
void MaxLigne(int l, int c, int MAT[][MAX], int MaxLig[][MAX]) {
    for(int i = 0; i < l; i++) {
        int max = MAT[i][0];
        for(int j = 1; j < c; j++)
            if(MAT[i][j] > max) max = MAT[i][j];
        for(int j = 0; j < c; j++)
            MaxLig[i][j] = (MAT[i][j] == max) ? 1 : 0;
    }
}
void MinColonne(int l, int c, int MAT[][MAX], int MinCol[][MAX]) {
    for(int j = 0; j < c; j++) {
        int min = MAT[0][j];
        for(int i = 1; i < l; i++)
            if(MAT[i][j] < min) min = MAT[i][j];
        for(int i = 0; i < l; i++)
            MinCol[i][j] = (MAT[i][j] == min) ? 1 : 0;
    }
}
void TrouvePointsClos(int l, int c, int MAT[][MAX], int MaxLig[][MAX], int MinCol[][MAX]) {
    int Pt_clos = 0;
    printf("Points Clos:\n");
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if(MaxLig[i][j] == 1 && MinCol[i][j] == 1) {
                printf("Valeur: %d, Ligne: %d, Colonne: %d\n", MAT[i][j],i,j);
                Pt_clos = 1;
            }
        }
    }
    if(!Pt_clos) {
        printf("Aucun point clos trouve.\n");
    }
}

int main() {
    int MAT[MAX][MAX];
    int MaxLig[MAX][MAX];
    int MinCol[MAX][MAX];
    int l, c;
    SaisirMatrice(&l, &c, MAT);
    AfficherMatrice(l, c, MAT);
    MaxLigne(l, c, MAT, MaxLig);
    MinColonne(l, c, MAT, MinCol);
    TrouvePointsClos(l, c, MAT, MaxLig, MinCol);
    return 0;
}
