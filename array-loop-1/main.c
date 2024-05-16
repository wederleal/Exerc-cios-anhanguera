#include <stdio.h>

int main() {
    int numeros[5];
    int busca;
    int encontrado = 0; // Variável para indicar se o número da busca foi encontrado

    // Pedindo ao usuário para digitar 5 números e armazenando-os no array
    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Pedindo ao usuário para digitar o número de busca
    printf("Digite um número para buscar no array: ");
    scanf("%d", &busca);

    // Verificando se o número de busca está no array
    for (int i = 0; i < 5; i++) {
        if (numeros[i] == busca) {
            encontrado = 1;
            break;
        }
    }

    // Exibindo o resultado da busca
    if (encontrado) {
        printf("O número %d foi encontrado no array.\n", busca);
    } else {
        printf("O número %d não foi encontrado no array.\n", busca);
    }

    return 0;
}
