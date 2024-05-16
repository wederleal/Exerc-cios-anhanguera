#include <stdio.h>

int main() {
    float notas[4];
    float soma = 0.0;
    
    printf("Digite as 4 notas:\n");
    
    // Lendo e armazenando as notas no vetor
    for (int i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    printf("Notas inseridas: ");
    
    // Exibindo as notas
    for (int i = 0; i < 4; i++) {
        printf("%.2f ", notas[i]);
    }
    
    printf("\n");
    
    // Calculando a média
    float media = soma / 4;
    printf("Média: %.2f\n", media);
    
    return 0;
}
