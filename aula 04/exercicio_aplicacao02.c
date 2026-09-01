/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int hora, minuto, total;
    
    printf("Hora? ");
    scanf("%d", &hora);
     
    printf("Minutos? ");
    scanf("%d", &minuto);
    
    total = (hora*60) + minuto;
    
    printf("ja se passaram %d minutos desde o inicio do dia", total);

    return 0;
}