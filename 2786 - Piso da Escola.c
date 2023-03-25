

#include <stdio.h>

int main() {
    int l,c;
    int tipo1, tipo2;

    scanf("%d %d",&l,&c);

    tipo1 = l*c + (c-1)*(l-1);
    tipo2 = (c-1)*2 + (l-1)*2;

    printf("%d\n%d\n",tipo1,tipo2);

    return 0;
}
