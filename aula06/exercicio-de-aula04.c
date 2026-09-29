/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, contador;
    
    printf("digite o numero da tabuada: ");
    scanf("%d", &numero);
    
    for(contador=1;contador<=10;contador++){
        printf("%d X %d = %d \n", numero, contador, numero*contador);
    }

    return 0;
}
