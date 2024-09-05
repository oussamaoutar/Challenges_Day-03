#include <stdio.h>

typedef struct {
    char* titre;
    char* auteur;
    int annee;
} Livre;

Livre retourner_livre() {
    Livre L = {
        "Livre",
        "Oussama Outar",
        2024,
    };
    return L;
}

int main() {
    Livre L1;
    L1 = retourner_livre();
    printf("Titre : %s\nAuteur : %s\nAnnée : %d", L1.titre, L1.auteur, L1.annee);

    return 0;
}