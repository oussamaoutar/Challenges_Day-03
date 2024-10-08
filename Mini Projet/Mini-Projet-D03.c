#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char nom[25];
    char numTel[25];
    char email[100];
} Contact;

Contact contacts[1000];
int NbrContacts = 0;

void ajouterContact();
void modifierContact();
void supprimerContact();
void afficherContacts();
void rechercherContact();

int contactExists(char nom[50]) {
    for(int i=0; i<NbrContacts; i++) {
        if(!strcmp(nom, contacts[i].nom)) {
            return i;
        }
    }
    return -1;
}

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
    printf("Contact ajouté(e) avec succès !\n");
}

void modifierContact() {
    char nomContact[50];
    printf("Saisir le nom du contact ===> ");
    scanf(" %[^\n]s", &nomContact);
    int indiceContactTrouve = contactExists(nomContact);
    if(indiceContactTrouve != -1) {
        char nvNumTel[20];
        char nvEmail[100];
        printf("Saisir le nouveau numéro de téléphone ===> ");
        scanf(" %[^\n]s", &contacts[indiceContactTrouve].numTel);
        printf("Saisir le nouvel e-mail ===> ");
        scanf(" %[^\n]s", &contacts[indiceContactTrouve].email);
        printf("Contact Modifiée avec Succès !\n");
    } else {
        printf("Contact non trouvé(e) !\n");
    }
}

void supprimerContact() {
    char nomContact[50];
    printf("Saisir le nom du contact ===> ");
    scanf(" %[^\n]s", &nomContact);
    int indiceContactTrouve = contactExists(nomContact);
    if(indiceContactTrouve != -1) {
        for(int i=indiceContactTrouve; i<NbrContacts-1; i++) {
            contacts[i] = contacts[i+1];
        }
        NbrContacts--;
        printf("Contact Supprimé(e) avec Succès !\n");
    } else {
        printf("Contact non trouvé(e) !\n");
    }
}

void afficherContacts() {
    if(!NbrContacts) printf("Il n'y a aucun contact."); 
    else {
        printf("Nom | Numéro de Téléphone | E-mail\n");
        for(int i=0; i<NbrContacts; i++) {
            printf("%s | %s | %s\n", contacts[i].nom, contacts[i].numTel, contacts[i].email);
        }
    }
}

void rechercherContact() {
    char nomContact[50];
    printf("Saisir le nom du contact ===> ");
    scanf(" %[^\n]s", &nomContact);
    int indiceContactTrouve = contactExists(nomContact);
    if(indiceContactTrouve != -1) {
        printf("Nom: %s\nNuméro de Téléphone: %s\nE-mail: %s\n", contacts[indiceContactTrouve].nom, contacts[indiceContactTrouve].numTel, contacts[indiceContactTrouve].email);
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
        printf("===> ");
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