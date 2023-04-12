
#include <stdio.h>

int main() {
    int N,i,j;
    char operador,lixo[10];
    int a,b;
    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf(" %d",&a);
        scanf(" %c",&operador);
        scanf(" %d",&b);

        if (operador != '+'){
            scanf(" %s",lixo);
            printf("skipped\n");
        }else{
            a = a + b;
            printf("%d\n",a);
        }
        
    }


    return 0;
}
