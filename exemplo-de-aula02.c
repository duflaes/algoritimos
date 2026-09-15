/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    printf("digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("digite a segunda nota: ");
    scanf("%f",&nota2);
    
    media = (nota1 + nota2) /2;
    
    if (media >= 6) {
        printf("parabens, voce foi aprovado com media %.1f", media );
    } else {
        printf("infelizmente, voce foi reprovado.");
    }
    
    return 0;
}

