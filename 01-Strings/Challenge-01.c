#include <stdio.h>

int main() {
    char chaine[1000];
    printf("Saisir uen chaine : ");
    scanf("%[^\n]s", &chaine);
    printf(chaine);
    return 0;
}