#include <stdio.h>
#include <math.h>

int main() {
    int n,x,y;

    scanf("%d",&n);

    n = n*n;

    x = (int)ceil(n/(double)2);
    y = n/2;

    printf("%d casas brancas e %d casas pretas\n",x,y);

    return 0;
}
