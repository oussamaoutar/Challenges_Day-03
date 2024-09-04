#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000], sous_ch[1000];
    printf("Saisir la chaine : ");
    scanf("%[^\n]s", &ch);
    printf("Saisir la sous-chaine : ");
    scanf(" %[^\n]s", &sous_ch);
    if(strstr(ch, sous_ch)) printf("Existe");
    else printf("N'existe pas");    

    return 0;
}