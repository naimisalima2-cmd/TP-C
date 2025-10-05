#include <stdio.h>
#define Max 100

void saisir(int taille, int mat[][Max]){
    for(int i=0; i<taille; i++){
        for(int j=0; j<taille; j++){
            printf("mat[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

void afficher(int taille, int mat[][Max]){
    for(int i=0; i<taille; i++){
        for(int j=0; j<taille; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

void additionner(int taille, int mat1[][Max], int mat2[][Max]){
    int mat3[Max][Max];
    for(int i=0; i<taille; i++)
        for(int j=0; j<taille; j++)
            mat3[i][j] = mat1[i][j] + mat2[i][j];
    printf("Resultat de l'addition :\n");
    afficher(taille, mat3);
}

void multiplier(int taille, int mat1[][Max], int mat2[][Max]){
    int mat3[Max][Max];
    for(int i=0; i<taille; i++){
        for(int j=0; j<taille; j++){
            mat3[i][j] = 0;
            for(int k=0; k<taille; k++)
                mat3[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
    printf("Resultat de la multiplication :\n");
    afficher(taille, mat3);
}

int menu(){
    int choix;
    printf("\nLes operations possibles:\n");
    printf("1: Additionner deux matrices\n");
    printf("2: Multiplier deux matrices\n");
    printf("Choisir une operation : ");
    scanf("%d", &choix);
    return choix;
}

int main(){
    int mat1[Max][Max], mat2[Max][Max];
    int taille, choix;

    printf("Saisir la taille de matrice : ");
    scanf("%d", &taille);

    printf("Saisie de la matrice 1 :\n");
    saisir(taille, mat1);
    printf("Saisie de la matrice 2 :\n");
    saisir(taille, mat2);
    do {
        choix = menu();
        switch(choix){
            case 1:
                additionner(taille, mat1, mat2);
                break;
            case 2: 
                multiplier(taille, mat1, mat2);
                break;
            default:
                printf("Choix invalide. Reessayez.\n");
        }
    } while(choix != 1 && choix != 2);

    return 0;
}
