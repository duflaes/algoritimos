/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("digite seu peso: ");
    scanf("%f", &peso );
    
    printf("digite sua altura:" );
    scanf("%f", &altura );
    
    imc = peso / (altura*altura);
    
    printf("seu imc e: %.2f\n", imc);

    return 0;
}
