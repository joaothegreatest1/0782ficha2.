#include <stdio.h>

int main(void){

int opcao;
float quantidade;
float USD;
float CAD;
float Euro;





printf("1- Euro-USD\n2- USD-Euro\n3- Euro-CAD\n4- CAD-Euro\n");
scanf("%d",&opcao);

if (opcao == 1)
{
    printf("Insira a quantidade\n");
    scanf("%f",&quantidade);

    USD = quantidade * 1.12;

    printf("%0.2f € = %0.2f $\n",quantidade,USD);

    
}
else if(opcao == 2)
{
    printf("Insira a quantidade\n");
    scanf("%f",&quantidade);

    Euro = quantidade / 1.12;

    printf("%0.2f $ = %0.2f €\n",quantidade,Euro);
}
else if (opcao == 3)
{
    printf("Insira a quantidade\n");
    scanf("%f",&quantidade);

    CAD = quantidade / 1.45;

    printf("%0.2f € = %0.2f $\n",quantidade,CAD);
}
else if (opcao == 4)
{
    printf("Insira a quantidade\n");
    scanf("%f",&quantidade);

    Euro = quantidade * 1.45;

    printf("%0.2f $ = %0.2f €\n",quantidade,Euro);
}
else
{
    printf("Opcao invalida\nObrigado!");
}


























    return 0;
}