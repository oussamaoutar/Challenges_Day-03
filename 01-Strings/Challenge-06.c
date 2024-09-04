#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000], car;
    printf("Saisir la chaine : ");
    scanf("%[^\n]s", &ch);
    printf("Saisir un caractère : ");
    scanf(" %c", &car);
    int count = 0;
    for(int i = 0; i<strlen(ch); i++) {
        if(ch[i] == car) count++;
    }
    printf("Nombre Occurrences : %d", count);

    return 0;
}