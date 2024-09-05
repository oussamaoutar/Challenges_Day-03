#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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

void modifierContact() {
    char nomContact[50];
    bool existe = false;
    int indiceContactTrouve;
    printf("Saisir le nom du contact ===> ");
    scanf(" %[^\n]s", &nomContact);
    for(int i=0; i<NbrContacts; i++) {
        if(!strcmp(nomContact, contacts[i].nom)) {
            existe = true;
            indiceContactTrouve = i;
            break;
        }
    }
    if(existe) {
        char nvNumTel[20];
        char nvEmail[100];
        printf("Saisir le nouveau numéro de téléphone ===> ");
        scanf(" %[^\n]s", &nvNumTel);
        printf("Saisir le nouvel e-mail ===> ");
        scanf(" %[^\n]s", &nvEmail);
        contacts[indiceContactTrouve].numTel = nvNumTel;
        contacts[indiceContactTrouve].email = nvEmail;
        printf("Contact Modifiée avec Succès !\n");
    } else {
        printf("Contact non trouvé(e) !\n");
    }
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