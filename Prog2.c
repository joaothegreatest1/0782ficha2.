#include <stdio.h>

int main(void){

int x;
int y;
int soma;

printf("Introduza um numero para X\n");
scanf("%d",&x);

printf("Introduza um segundo numero para Y\n");
scanf("%d",&y);

soma = x + y;

if (x > y)
{
    printf("Maior valor introduzido foi X(%d)\n",x);
}else if (x < y)
{
    printf("Maior valor introduzido foi Y(%d)\n",y);
}else
{
    printf("Ambos valores de X e Y são iguais\n");
}






















    return 0;
}