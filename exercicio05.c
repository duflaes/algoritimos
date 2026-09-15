/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char tipoHospedagem;
    int  quantidadedeDiarias;
    float valorDiaria, valorTotal;
    
    printf("qual o tipo de hospedagem (5 - d - T)? ");
    scanf("%c",&tipoHospedagem);
    
    printf("qual a quantidade de diarias? ");
    scanf("%d",&quantidadedeDiarias);
    
    switch(tipoHospedagem){
        case'D':
        case'd':
        valorDiaria = 450.0f;
        break;
        
        default:
            printf("\n tipo invalido\n");
            
    }
     
    valorTotal = valorDiaria*quantidadedeDiarias;
    
    printf("\n o valor total da hospedagem e: r$%.2f", valorTotal);
    return 0;
}
