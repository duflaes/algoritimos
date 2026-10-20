/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int quantidade, i;
 FILE *arquivo;
 char dia[10];
 float consumo;
 
 arquivo = fopen("consumo.txt", "a");
 
 if (arquivo== NULL){
     printf("nao foi possivel criar o arquivo\n");
     return 1;
 }
 
 printf("quantos registro deseja cadastrar: ");
 scanf("%d", &quantidade);

for (i=0; i<=quantidade;i++){
    printf("\nregistro\n", i+1);
    
    printf("dia: ");
    scanf("%9s", dia);
    
    printf("consumo: ");
    scanf("%f", &consumo);
    
    fprintf(arquivo, "%s %.2f\n", dia, consumo);

    
    
}
fclose(arquivo);
printf("consumo gravado com sucesso");

    return 0;
}
