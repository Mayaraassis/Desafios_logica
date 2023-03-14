#include <stdio.h>
#include <string.h>

int main() {
    int qtd,i;
    char nome[100], funcao[12];
    int horas, bonecos = 0, arquitetos = 0, desenhistas = 0, musicos = 0;
    int p;

    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%s",nome);
        scanf("%s",funcao);
        scanf("%d",&horas);

        if(strcmp(funcao,"bonecos") == 0){ // 8 Horas
            bonecos += horas;
        }else if(strcmp(funcao,"arquitetos") == 0){ // 4 Horas
            arquitetos += horas;
        }else if(strcmp(funcao,"musicos") == 0){ // 6 Horas
            musicos += horas;
        }else if(strcmp(funcao,"desenhistas") == 0){ // 12 Horas
            desenhistas += horas;
        }
    }

    p = bonecos/8 + arquitetos/4 + musicos/6 + desenhistas/12;

    printf("%d\n",p);

    return 0;
}
