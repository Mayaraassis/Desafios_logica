#include <stdio.h>
#include <string.h>

int main(){
    char l;
    char c[2];
    int posicao;

    scanf(" %c",&l);
    c[0] = l;
    posicao = strcmp("A",c);
    posicao = posicao*(-1) + 1;
    printf("%d\n",posicao);

    return 0;
}
