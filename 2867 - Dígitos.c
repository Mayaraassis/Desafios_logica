#include <stdio.h>
#include <math.h>

int main() {
    int qtd,i,n,e;
    double log;
    scanf("%d",&qtd);

    for(i=0; i<qtd; i++){
        scanf("%d %d",&n,&e);
        log = log10(pow((double)n,(double)e)) + 1;
        floor(log);
        printf("%d\n",(int)log);
    }

    return 0;
}
