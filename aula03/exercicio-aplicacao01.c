/******************************************************************************
Welcome to GDB Online.
 GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
 C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
 Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
#include <stdio.h>
int main()
{
  float raio, perimetro;
  printf("qual a medida do raio em centimetros?");
  scanf("%f", &raio);
  perimetro = 2 * 3.14 * raio;
  printf("o perimetro da circunferencia e: %.2f cm\n", perimetro);
  return 0;
}
