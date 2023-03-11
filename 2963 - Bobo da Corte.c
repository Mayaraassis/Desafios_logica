#include <stdio.h>

int main() {
    int qtd, x, carlos, maior;
    int i;

    scanf("%d",&qtd);
    scanf("%d",&carlos);
    maior = carlos;

    for(i=1; i<qtd; i++){
        scanf("%d",&x);
        if(x>maior){
            maior = x;
        }
    }

    if(maior == carlos){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
