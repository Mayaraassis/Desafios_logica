#include <stdio.h>

int main() {
    int a,b, c;
    int soma;

    scanf("%d %d %d",&a,&b,&c);

    if(b*2 + c*4 <=  a*2 + c*2 && b*2 + c*4 <= a*4 + b*2){
        soma = b*2 + c*4;
    }else if(a*2 + c*2 <= b*2 + c*4 && a*2 + c*2 <= a*4 + b*2){
        soma = a*2 + c*2;
    }else if(a*4 + b*2 <= b*2 + c*4 && a*4 + b*2 <= a*2 + c*2){
        soma = a*4 + b*2;
    }

    printf("%d\n",soma);

    return 0;
}
