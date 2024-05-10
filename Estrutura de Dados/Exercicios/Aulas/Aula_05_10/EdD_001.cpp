#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    arq = fopen("notas.txt", "rt");

    if (arq == NULL) {
        printf("Erro na abertura do arquivo\n");
        exit(0);
    }

    char nome[1000];
    float nota1, nota2, nota3, nota4, media = 0.0;

    while (1) {
        fscanf(arq, "%[^;];%f;%f;%f;%f\n", nome, &nota1, &nota2, &nota3, &nota4);
        if(feof(arq)) break;
        media = (nota1 + nota2 + nota3 + nota4) / 4.0;
        printf("%s %.1f\n", nome, media);
    }

    fclose(arq);
    return 0;
}
