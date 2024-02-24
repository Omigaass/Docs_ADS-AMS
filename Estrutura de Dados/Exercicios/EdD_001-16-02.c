
//? As duas bibliotecas abaixo incluem os comandos utilizados no programa, a biblioteca stdio.h e a biblioteca stdlib.h incluem as funções printf, scanf e system.
#include <stdio.h>
#include <stdlib.h>

//? A função main() inicia o programa C. Ela inicializa as variáveis e chama as funções.
int main()
{
    //? float é um tipo de dados de ponto flutuante, ou seja, números reais.
    //? Este float está sendo utilizado para declarar duas variaveis, a n1 e n2.
    float n1, n2;

    //? A função printf() exibe uma mensagem na tela, neste caso "informe 2 numeros float" e "\n" para pular linha.
    //? A função scanf() recebe um dado do tipo float e armazena em n1 e n2.
    //? A sintaxe do scanf é de ("tipo", variaveis).
    printf("informe 2 numeros float \n");
    scanf("%f %f", &n1, &n2);

    //? Este printf está imprimindo uma string (texto) e fazendo um calculo para mostrar o resultado da media. 
    printf("media:%.2f\n", (n1+n2)/2);

    //? A função system() finaliza o programa.
    system("pause");
}

/* 
%Exemplo do que ocorre na execução:

!System.: informe 2 numeros float 
?Client.: 5.5
?Client.: 9.8
!System.: media:7.65

*/

/*!
*código completo sem comentários:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2;
    printf("informe 2 numeros float \n");
    scanf("%f %f", &n1, &n2);
    printf("media:%.2f\n", (n1+n2)/2);
    system("pause");
}
*/