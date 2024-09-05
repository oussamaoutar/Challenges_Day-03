#include <stdio.h>

typedef struct {
    char* nom;
    char* prenom;
    int age;
} Personne;

int main() {
    Personne p1;
    p1.nom = "Outar";
    p1.prenom = "Oussama";
    p1.age = 21;
    printf("Nom : %s\nPrénom : %s\nAge : %d", p1.nom, p1.prenom, p1.age);

    return 0;
}