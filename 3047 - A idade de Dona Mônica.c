#include <stdio.h>

int main() {
    int m,a,b;
    int idade;

    scanf("%d%d%d",&m,&a,&b);
    idade = a;

    if(idade < b) idade = b;
    if(idade < (m-a-b)) idade = (m-a-b);

    printf("%d\n",idade);

    return 0;
}
