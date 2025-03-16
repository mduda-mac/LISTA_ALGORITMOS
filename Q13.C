#include <stdio.h>
#include <math.h>
int main (void)
{
    int ca,cb;
    float h;

    printf("Digite o tamanho do cateto A do triângulo:");
    scanf("%d",&ca);

    printf("Digite o tamanho do cateto B do triângulo:");
    scanf("%d",&cb);

    h=(sqrt(pow(ca,2)+pow(cb,2)));

    printf("A hipotenusa do triângulo é %.2f:",h);

    return 0;
}