#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000];
    printf("Saisir la chaine : ");
    scanf("%[^\n]s", &ch);
    int taille_chaine = strlen(ch);
    char chaine_inversee[taille_chaine];
    for(int i=0; i<taille_chaine; i++) {
        chaine_inversee[taille_chaine - i-1] = ch[i];
    }
    printf(chaine_inversee);

    return 0;
}