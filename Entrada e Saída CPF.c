#include <stdio.h>

int main (){
    int dd,mm,aa,cc;
    char lixo;

    scanf("%d",&dd);
    scanf("%c",&lixo);
    scanf("%d",&mm);
    scanf("%c",&lixo);
    scanf("%d",&aa);
    scanf("%c",&lixo);
    scanf("%d",&cc);

    printf("%03d\n%03d\n%03d\n%02d\n",dd,mm,aa,cc);

    return 0;
}
