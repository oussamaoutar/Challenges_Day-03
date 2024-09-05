#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* nom;
    char* numTel;
    char* email;
} Contact;

Contact contacts[];
int NbrContacts = 0;

void ajouterContact() {
    Contact c;
    printf("Nom ===> ");
    scanf(" %[^\n]s", &c.nom);
    printf("Numéro de Téléphone ===> ");
    scanf(" %[^\n]s", &c.numTel);
    printf("E-mail ===> ");
    scanf(" %[^\n]s", &c.email);
    contacts[NbrContacts] = c;
    NbrContacts++;
}

int main() {
    int choix;
    do {
        printf("Saisir un Choix : \n");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact\n");
        printf("3. Supprimer un Contact\n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contacts\n");
        printf("Tapper un Autre Chiffre pour Quitter.\n");
        printf("====> ");
        scanf("%d", &choix);
            
        switch(choix) {
            case 1: ajouterContact(); break;
            case 2: modifierContact(); break;
            case 3: supprimerContact(); break;
            case 4: afficherContacts(); break;
            case 5: rechercherContact(); break;
            default: exit;
        }
    } while(choix > 0 && choix <= 5);


    return 0;
}