#include <stdio.h>
#include <string.h>

int main() {
    char ch1[1000], ch2[1000];
    printf("Saisir la 1ère chaine : ");
    scanf("%[^\n]s", &ch1);
    printf("Saisir la 2ème chaine : ");
    scanf(" %[^\n]s", &ch2);
    printf("%s\n%s", strcat(ch1, ch2));

    return 0;
}