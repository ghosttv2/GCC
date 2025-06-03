#include <stdio.h>

int main() {
    int age;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    if (age < 18) {
        printf("t'es trop petit. T'es un mineur\n");
    } else if (age < 65) {
        printf("Bonjour Monsieur.\n");
    } else {
        printf("Big Big Senior\n");
    }

    return 0;
}
