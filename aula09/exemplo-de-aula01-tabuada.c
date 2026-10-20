/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int numero, i;
 FILE *arquivo;
 
 printf("digite um numero inteiro: ");
 scanf("%d", &numero);
 
 arquivo = fopen("tabuada.txt", "w");
 
 if (arquivo== NULL){
     printf("nao foi possivel criar o arquivo\n");
     return 1;
 }

for (i=0; i<=10;i++){
    fprintf(arquivo, "%d * %d = %d \n", numero, i, numero*i);
    
    
}
fclose(arquivo);
printf("tabuada gravada com sucesso");

    return 0;
}
