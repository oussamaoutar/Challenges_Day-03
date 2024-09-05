#include <stdio.h>

typedef struct {
    char* nom;
    char* prenom;
    int notes[];
} Etudiant;

int main() {
    Etudiant e1 = {
        "Outar", "Oussama"
    };
    e1.notes[0] = 13;
    e1.notes[1] = 10;
    e1.notes[2] = 14;
    printf("Nom : %s\nPrénom : %s\nNotes : ", e1.nom, e1.prenom);
    for(int i=0; i<2; i++) printf("%d ",e1.notes[i]);

    return 0;
}