
#include <stdio.h>
using namespace std;

int main()
{
    int prod, j, i;
    scanf("%d", &prod);
    int produtos[prod][2], x;
    double soma=0, aux=0;
    for(i = 0; i<prod; i++){
        for( j=0; j<2; j++){
            scanf("%d", &x);
            produtos[i][j] = x;
        }
    }

    for(i = 0; i< prod; i++){
        if(produtos[i][0] == 1001){
            aux= produtos[i][1] * 1.50;
            soma+=aux;
        }
        else if(produtos[i][0] == 1002){
            aux= produtos[i][1] * 2.50;
            soma+=aux;
        }
        else if(produtos[i][0] == 1003){
            aux= produtos[i][1] * 3.50;
            soma+=aux;
        }
        else if(produtos[i][0] == 1004){
            aux= produtos[i][1] * 4.50;
            soma+=aux;
        }
        else if(produtos[i][0] == 1005){
            aux= produtos[i][1] * 5.50;
            soma+=aux;
        }

    }

   printf("%.2lf\n", soma);
    return 0;
}
