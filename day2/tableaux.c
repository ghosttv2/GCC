#include <stdio.h>

int main() {
    int notes[] = {15, 12, 18, 10, 17};
    int somme = 0;
    int taille = sizeof(notes) / sizeof(notes[0]);
    float moyenne;

    for (int i = 0; i < taille; i++) {
        somme += notes[i];
    }

    moyenne = (float)somme / taille;
    printf("la moyenne des notes est : %.2f\n", moyenne);

    return 0;
}
