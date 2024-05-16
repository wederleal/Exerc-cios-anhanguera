#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], vetor3[10];
    
    // Lendo os elementos do primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }
    
    // Lendo os elementos do segundo vetor
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }
    
    // Gerando o terceiro vetor intercalando os elementos dos dois primeiros vetores
    int j = 0; // Índice para o terceiro vetor
    for (int i = 0; i < 5; i++) {
        vetor3[j++] = vetor1[i];
        vetor3[j++] = vetor2[i];
    }
    
    // Imprimindo o terceiro vetor
    printf("Terceiro vetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");
    
    return 0;
}
