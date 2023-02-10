#include <stdio.h>

int main() {
    int qtd = 1,pessoas;
    int i;

    while(qtd){
        scanf("%d",&qtd);

        for(i=0; i<qtd; i++) {
            scanf("%d",&pessoas);

            pessoas *=2;

            if((pessoas/2)%2 == 0){
                pessoas -= 2;
            }else{
                pessoas -= 1;
            }
            printf("%d\n",pessoas);
        }

    }

    return 0;
}
