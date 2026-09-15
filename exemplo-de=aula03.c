/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float nota1, nota2, media, frequencia;
    
    printf("digite a nota1: ");
    scanf("%f", &nota1);
    
    printf("digite a nota2: ");
    scanf("%f", &nota2);
    
    printf("digite a frequencia (em porcentagem): ");
    scanf("%f", &frequencia);
    
    media = (nota1 + nota2) /2;
    
    if (frequencia >=75){
        if (media >=6) {
        printf("aprovado\n");
   } }
     else {
        printf("reprovado.\n");
       
    }

     return 0;
}
