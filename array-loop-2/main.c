#include <stdio.h>

int main() {
    int idades[5];
    float alturas[5];

    // Solicitando e armazenando as idades e alturas
    printf("Digite a idade e altura de 5 pessoas:\n");
    for (int i = 0; i < 5; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura (em metros): ");
        scanf("%f", &alturas[i]);
    }

    // Imprimindo as idades e alturas na ordem inversa
    printf("\nIdades e alturas na ordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Pessoa %d - Idade: %d, Altura: %.2f metros\n", 5 - i, idades[i], alturas[i]);
    }

    return 0;
}
