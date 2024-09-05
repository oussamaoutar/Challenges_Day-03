#include <stdio.h>

typedef struct {
    char* nom;
    char* numTel;
    char* email;
} Contact;

int main() {
    int choix;
    do {
        printf("Saisir un Choix : \n");
        printf("1. Ajouter un Contact\n");
        printf("2. Supprimer un Contact\n");
        printf("3. Modifier un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contacts\n");
        printf("Tapper un Autre Chiffre pour Quitter.\n");
        printf("====> ");
        scanf("%d", &choix);
    } while(choix > 0 && choix <= 5);


    return 0;
}