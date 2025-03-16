#include <stdio.h>
int main (void)
{
    float num1,num2,num3,num4,media;

    printf("Digite um número:");
    scanf("%f",&num1);

    printf("Digite um número:");
    scanf("%f",&num2);

    printf("Digite um número:");
    scanf("%f",&num3);

    printf("Digite um número:");
    scanf("%f",&num4);

    media= (num1+num2+num3+num4)/4;

    printf("A média aritmética é:%.2f",media);

    return 0;
}