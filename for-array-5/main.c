#include <stdio.h>

int main() {
    int numeros[5];
    int pares[5], impares[5];
    int contadorPares = 0, contadorImpares = 0;
    
    printf("Digite 5 números inteiros:\n");
    
    // Lendo e armazenando os 5 números inteiros no vetor
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    
    // Separando os números pares e ímpares nos vetores correspondentes
    for (int i = 0; i < 5; i++) {
        if (numeros[i] % 2 == 0) {
            pares[contadorPares] = numeros[i];
            contadorPares++;
        } else {
            impares[contadorImpares] = numeros[i];
            contadorImpares++;
        }
    }
    
    // Imprimindo o vetor original
    printf("Vetor original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    
    // Imprimindo o vetor de números pares
    printf("Números pares: ");
    for (int i = 0; i < contadorPares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");
    
    // Imprimindo o vetor de números ímpares
    printf("Números ímpares: ");
    for (int i = 0; i < contadorImpares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\n");
    
    return 0;
}
