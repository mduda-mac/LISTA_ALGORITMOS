#include <stdio.h>
int main (void)
{
    int num;
    printf("Digite um número:");
    scanf("%d",&num);
    
    printf("O antecessor do número é %d\n", num-1);
    printf("O sucessor do número é %d\n", num+1);

    return 0;

}
