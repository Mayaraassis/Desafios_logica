#include <stdio.h>

int main() {
    int n,i,mov;
    char p_inicio;
    int copos[4] = {0,0,0,0};
    scanf("%d %c",&n,&p_inicio);
    if(p_inicio == 'A'){
        copos[0] = 1;
    } else if(p_inicio == 'B'){
        copos[1] = 1;
    } else if(p_inicio == 'C'){
        copos[2] = 1;
    }

    for(i=0; i<n; i++){
        scanf("%d",&mov);
        if(mov == 1){
            copos[3] = copos[0];
            copos[0] = copos[1];
            copos[1] = copos[3];
            copos[3] = 0;
        }else if(mov == 2){
            copos[3] = copos[1];
            copos[1] = copos[2];
            copos[2] = copos[3];
            copos[3] = 0;
        }else if(mov == 3){
            copos[3] = copos[0];
            copos[0] = copos[2];
            copos[2] = copos[3];
            copos[3] = 0;
        }
    }

    if(copos[0] == 1){
        printf("A\n");
    }else if(copos[1] == 1){
        printf("B\n");
    }else{
        printf("C\n");
    }

    return 0;
}
