#include <stdio.h>

int main() {
    int vetor[5];
    
    printf("Digite 5 números:\n");
    
    // Lendo e armazenando os números no vetor
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor na ordem inversa: ");
    
    // Exibindo os números do vetor na ordem inversa
    for (int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    
    return 0;
}
