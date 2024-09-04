#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch[1000], ch_min[1000];
    printf("Saisir la chaine : ");
    scanf("%[^\n]s", &ch);
    for(int i = 0; i<strlen(ch); i++) {
        ch_min[i] = tolower(ch[i]);
    }
    printf("%s", ch_min);

    return 0;
}