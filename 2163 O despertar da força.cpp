#include <stdio.h>

int main() {
    int achou = 0;
    int n,m,i,j,k,l;
    int x,y;
    int matriz[1000][1000];

    scanf("%d %d",&n,&m);

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=1; i<n-1; i++){
        for(j=1; j<m-1; j++){
            if(matriz[i][j] == 42){
                    achou = 1;
                    for(k = i-1; k<(i+2); k++){
                        for(l=j-1; l<(j+2);l++){
                            if(k != i && l != j){
                                if(matriz[k][l] != 7){
                                    achou = 0;
                                    break;
                                }
                            }
                        }
                    if(achou != 0){
                        x = i + 1;
                        y = j + 1;
                        break;
                    }else{
                        x = 0;
                        j = 0;
                    }
                }
            }
        }
        if(achou)break;
    }

    printf("%d %d\n",x,y);


    return 0;
}
