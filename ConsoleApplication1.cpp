#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b) {
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

void Euclide(void) {

    int A;
    int B;

    printf("========================================\n");
    printf("         Algorithme d'Euclide           \n");
    printf("========================================\n");

    printf("A : ");
    while (scanf_s("%d", &A) != 1 || A <= 0) {
        printf("Erreur : Ce n'est pas un entier valide. Essayez encore : ");
        while (getchar() != '\n'); 
    }

    printf("B : ");
    while (scanf_s("%d", &B) != 1 || B <= 0) {
        printf("Erreur : Ce n'est pas un entier valide. Essayez encore : ");
        while (getchar() != '\n'); 
    }

    int result = pgcd(A, B);
    printf("PGCD : %d \n", result);
    printf("Le PGCD de %d et %d est : %d\n", A, B, result);
}

int main() {
    char choice;

    do {
        Euclide();
        printf("Appuyer sur 'c' pour continuer ou 'q' pour quitter : ");

        while (getchar() != '\n');
        choice = getchar();

    } while (choice != 'q');

    printf("Bye\n");
    return 0;
}
