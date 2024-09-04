#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch[1000], ch_sans_espaces[1000];
    int j=0;
    printf("Saisir la chaine : ");
    scanf("%[^\n]s", &ch);
    // printf("%s", ch);
    for(int i = 0; i<strlen(ch); i++) {
        if(!isspace(ch[i])) ch_sans_espaces[j++] = ch[i];
    }
    printf("%s", ch_sans_espaces);

    return 0;
}