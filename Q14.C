#include <stdio.h>
int main (void)
{
    int num1,num2;

    printf("Digite um número:");
    scanf("%d",&num1);

    printf("Digite um número:");
    scanf("%d",&num2);

    if(num1>num2){
        printf("O número %d é maior",num1);
    }else{
        printf("O número %d é menor",num1);
    }

    return 0;
}