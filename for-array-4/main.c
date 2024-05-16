#include <stdio.h>
#include <ctype.h>

int main() {
    char caracteres[10];
    int consoantes = 0;
    
    printf("Digite 10 caracteres:\n");
    
    // Lendo os 10 caracteres e armazenando no vetor
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &caracteres[i]);
    }
    
    printf("Consoantes lidas: ");
    
    // Verificando cada caractere e contando as consoantes
    for (int i = 0; i < 10; i++) {
        char c = tolower(caracteres[i]); // Convertendo para minúsculas para simplificar a verificação
        if ((c >= 'a' && c <= 'z') && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c ", caracteres[i]);
            consoantes++;
        }
    }
    
    printf("\nTotal de consoantes: %d\n", consoantes);
    
    return 0;
}
