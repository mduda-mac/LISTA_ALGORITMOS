#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL,"Portuguese");

    int num;

    printf("Digite um n�mero:");
    scanf("%d",&num);

    printf("Seu n�mero � %d\n",num);

    return 0;
}