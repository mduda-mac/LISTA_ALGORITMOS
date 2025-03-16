#include <Stdio.h>
int main (void)
{
    float sal,prest;

    printf("Digite o salário: $");
    scanf("%f",&sal);

    printf("Digite o valor da prestação do empréstimo: R$ ");
    scanf("%f",&prest);

    if(prest>sal*0.20){
        printf("Empréstimo não concedido");
    }else{
        printf("Empréstimo concedido");
    }
    return 0;
}