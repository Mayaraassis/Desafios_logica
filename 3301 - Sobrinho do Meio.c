#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if((a>b && a<c) || (a>c && a<b)){
        printf("huguinho\n");
    }else if((b>a && b<c) || (b>c && b<a)){
        printf("zezinho\n");
    }else if((c>a && c<b) || (c>b && c<a)){
        printf("luisinho\n");
    }

    return 0;
}
