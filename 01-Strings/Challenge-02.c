#include <stdio.h>
#include <string.h>

int main() {
    char chaine[1000];
    printf("Saisir une chaine : ");
    scanf("%[^\n]s", &chaine);
    printf("La taille de cette chaine est : %d", strlen(chaine));

    return 0;
}