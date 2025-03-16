#include <stdio.h>

int main(void) {
    // 1. Descrição das etapas da compilação
    printf("Etapas da Compilação:\n");
    
    printf("1. Pré-processamento: O pré-processador trata diretrizes especiais no código-fonte antes da compilação real, como eliminação de espaços desnecessários, substituição de macros e inclusão de arquivos adicionais.\n");
    
    printf("2. Compilação: O compilador realiza análise sintática e semântica, e gera código intermediário (geralmente em assembly).\n");
    
    printf("3. Montagem: O código assembly gerado na compilação é convertido em código objeto (binário). Funções e variáveis externas podem ainda não estar resolvidas.\n");
    
    printf("4. Ligação (Linkagem): O linker combina os arquivos objeto, resolve referências externas e gera o arquivo executável.\n\n");
    
    // 2. Comandos de compilação
    printf("Comandos de compilação:\n");
    
    printf("a) gcc prog.c -o prog: Compila o código-fonte prog.c e gera um executável chamado prog.\n");
    printf("b) gcc prog.c: Compila o código-fonte prog.c e gera um executável chamado a.out.\n");
    printf("c) (Erro no comando) gcc prog.c -o aux.c entsai.c: A sintaxe está incorreta, deve especificar um arquivo de saída válido.\n");
    printf("d) gcc progA.c progB.o: Compila o código-fonte progA.c e linka com o arquivo objeto progB.o.\n\n");
    
    // 3. Tipos de comentários em C
    printf("Tipos de Comentários em C:\n");
    printf("1. Comentário de uma linha: Use // no início da linha. Tudo após // é ignorado pelo compilador.\n");
    printf("2. Comentário de múltiplas linhas: Use /* no início e */ no final. Tudo entre /* e */ é ignorado pelo compilador.\n\n");
    
    // 18. Correção de erros
    printf("Correções de erros:\n");
    printf("a) printf(\"O valor é %%d\", numero); // Corrigido: não deve usar & no printf.\n");
    printf("b) scanf(\"%%d%%d\", &numero1, &numero2); // Corrigido: ambos devem ser passados por referência.\n");
    printf("c) printf(\"A soma é %%d \\n\", x + y); // Corrigido: o 'x + y' deve estar corretamente no printf.\n");
    printf("d) scanf(\"%%d\", &valor); // Corrigido: 'valor' deve ser passado por referência.\n\n");

    // 19. Saídas do programa
    printf("Valores impressos pelo programa:\n");
    printf("4 5.700000\n");
    printf("3 6\n");
    printf("2 9.000000\n");
    printf("3 6\n\n");

    // 20. Saída com base no valor inserido pelo usuário
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("num. positivo\n");
    }
    
    if (num >= 10) {
        printf("num. maior ou igual a 10\n");
    } else {
        printf("num. menor que 10\n");
    }

    return 0;
}
