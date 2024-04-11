/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float valor1, valor2, valor3,maior;
    
    printf("Digite valor 1\n");
    scanf("%f",&valor1);
    
    printf("Digite valor 2\n");
    scanf("%f",&valor2);
    
    printf("Digite valor 3\n");
    scanf("%f",&valor3);
    
    if ( valor1 >= valor2 && valor1 >= valor3){
        maior = valor1;
        
    }
    else if (valor2 >= valor1 && valor2 >= valor3) {
        maior = valor2;
    } else {
        maior = valor3;
    }
    
     printf("O maior valor e: %.2f\n", maior);
    

    return 0;
}
