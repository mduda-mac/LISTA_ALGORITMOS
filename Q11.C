#include <stdio.h>
int main(void)
{
    float valor = 780.000;
    float gan1,gan2,gan3;

    gan1=valor*0.46;
    gan2=valor*0.32;
    gan3=valor-gan1-gan2;
    
    printf("O primeiro ganhador receberá o valor de $ %.2f mil:\n",gan1);
    printf("O segundo ganhador receberá o valor de $ %.2f mil:\n",gan2);
    printf("O terceiro ganhador receberá o valor de $ %.2f mil:\n",gan3);

    return 0;

}