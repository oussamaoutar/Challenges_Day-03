#include <stdio.h>
#include <string.h>

int main() {
    char chaine[1000];
    printf("Saisir une chaine : ");
    scanf("%[^\n]s", &chaine);
    int taille_chaine=0, i=0;
    char test;
    while(chaine[taille_chaine]!=NULL) {
        taille_chaine++;
    }
    printf("La taille de cette chaine est : %d", taille_chaine);

    return 0;
}