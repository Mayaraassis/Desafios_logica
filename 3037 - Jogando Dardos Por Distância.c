#include <stdio.h>
 
int main() {
 
    int x,d,qtd,i,j;
    int soma = 0,soma2 = 0;
    
    scanf("%d",&qtd);
    for(i=0; i<qtd; i++){
        for(j=0; j<3; j++){
            scanf("%d%d",&x,&d);
            soma +=x*d;
        }
        for(j=0; j<3; j++){
            scanf("%d%d",&x,&d);
            soma2 +=x*d;
        }
        if(soma>soma2)printf("JOAO\n");
        else printf("MARIA\n");
        soma = 0;
        soma2 = 0;
    }
    
    return 0;
}
