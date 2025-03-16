#include <stdio.h>
#include<math.h>
int main (void)
{
    float raio,area;
    const float pi= 3.141592;
    
    printf("Digite o raio do seu círulo:");
    scanf("%f",&raio);

    area=pi*(pow(raio,2));

    printf(" A área do círculo é %.2f", area);

    return 0;
}