#include <stdio.h>

int main() {
    int i,qtd,valor,t = 1;
    int anterior;
    char a = "",c = "";
    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d",&valor);
        if(i>0){
            if(anterior<valor){
                a = c;
                c = 'p';
                if(a == c){
                    t = 0;
                }
            }else if(anterior>valor){
                a = c;
                c = 'v';
                if(a == c){
                    t = 0;
                }
            }else{
                t = 0;
            }
        }
        anterior = valor;
    }

    if(t == 1)printf("1\n");
    else printf("0\n");

    return 0;
}
