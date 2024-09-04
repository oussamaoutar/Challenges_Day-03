#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch[1000], ch_maj[1000];
    printf("Saisir la chaine : ");
    scanf("%[^\n]s", &ch);
    for(int i = 0; i<strlen(ch); i++) {
        ch_maj[i] = toupper(ch[i]);
    }
    printf("%s", ch_maj);

    return 0;
}