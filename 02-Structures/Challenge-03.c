#include <stdio.h>

typedef struct {
    float longueur, largeur;
} Rectangle;

float aire_rectangle(Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {
    Rectangle r1;
    printf("Saisir la longueur : ");
    scanf("%f", &r1.longueur);
    printf("Saisir la largeur : ");
    scanf("%f", &r1.largeur);
    printf("Aire = %.2f", aire_rectangle(r1));

    return 0;
}