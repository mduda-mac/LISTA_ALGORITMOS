#include <stdio.h>
int main (void)
{
    int num1,num2,num3;

    printf("Digite um número");
    scanf("%d", &num1);

    printf("Digite um número");
    scanf("%d", &num2);

    printf("Digite um número");
    scanf("%d", &num3);

    printf("A soma desses três números é %d", num1+num2+num3);

    return 0;
}