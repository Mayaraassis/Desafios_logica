#include <stdio.h>

int main() {
    int qtd,i;
    int altura, largura, galhos;
    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d %d %d",&altura,&largura,&galhos);

        if(altura >= 200 && altura <= 300 && largura >= 50 && galhos >= 150 ){
            printf("Sim\n");
        }else{
            printf("Nao\n");
        }

    }

    return 0;
}
