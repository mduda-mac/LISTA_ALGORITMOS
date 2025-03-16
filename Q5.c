#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("Digite um número:");
    scanf("%d",&num);

    printf("Seu número é %d\n",num);

    return 0;
}