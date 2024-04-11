/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    float temperaturaC, temperaturaF;

   
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaC);

   
    temperaturaF = temperaturaC * (9.0 / 5.0) + 32;

   
    printf("A temperatura em Fahrenheit e: %.2f\n", temperaturaF);

    return 0;
}

