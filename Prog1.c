#include <stdio.h>

int main(void){

int opcao;
float quantidade;
float lb;
float kg;

printf("Para converter quilogramas para libras insira 1 \nPara converter de libras para quilogramas insira algo diferente de 1\n");
scanf("%d",&opcao);

if (opcao == 1)
{
    printf("Insira a quantidade que quer converter para libras\n");
    scanf("%f",&quantidade);

    lb = quantidade * 2.2;

    printf("%0.3f kg = %0.3f lb\n",quantidade,lb);


}else
{
    printf("Insira a quantidade que quer converter para quilogramas\n");
    scanf("%f",&quantidade);

    kg = quantidade / 2.2;

    printf("%0.3f lb = %0.3f kg\n",quantidade,kg);
}





return 0;
}