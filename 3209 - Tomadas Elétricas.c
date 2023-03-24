#include <stdio.h>

int main() {
    int qtd;
    int k,i,j,o,soma =0;

    scanf("%d",&qtd);

    for(i = 0; i<qtd; i++){
        scanf("%d",&k);
        for(j=0; j<k; j++){
            scanf("%d",&o);
            soma+=o;
        }
        soma = soma - (k-1);
        printf("%d\n",soma);
        soma = 0;
    }

    return 0;
}
