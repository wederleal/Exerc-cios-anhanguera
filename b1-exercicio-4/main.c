/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


char* classificar_triangulo(float lado1, float lado2, float lado3) {
    if (lado1 == lado2 && lado2 == lado3) {
        return "Equilátero";
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return "Isósceles";
    } else {
        return "Escaleno";
    }
}

int main() {
    float lado1, lado2, lado3;
    
    printf("Digite o comprimento do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Digite o comprimento do segundo lado do triângulo: ");
    scanf("%f", &lado2);
    printf("Digite o comprimento do terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    char* tipo_triangulo = classificar_triangulo(lado1, lado2, lado3);
    printf("O triângulo é: %s\n", tipo_triangulo);

    return 0;
}

