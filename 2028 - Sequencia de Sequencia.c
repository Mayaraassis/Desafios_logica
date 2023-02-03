#include <stdio.h>

int main() {
    int n,i,j;
    int caso = 0,numeros;

    while(scanf("%d",&n) != EOF) {
        caso++;
        numeros = 0;

        for(i=0; i<=n; i++){
            for(j=0; j<i; j++) {
                numeros++;
            }
        }
        numeros++;
        if(n == 0){
            printf("Caso %d: %d numero\n",caso,numeros);
            printf("0\n");
        }else{
            printf("Caso %d: %d numeros\n",caso,numeros);
            printf("0 ");
        }
        for(i=0; i<=n; i++){
            for(j=0; j<i; j++) {
                if(j!=n-1){
                    printf("%d ",i);
                }else{
                    printf("%d\n",i);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
