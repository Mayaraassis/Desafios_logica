#include <stdio.h>
#include <string.h>
int main() {
    char mensagem[102];
    int i,pares = 0,tamanho;

    scanf("%s",mensagem);

    tamanho = strlen(mensagem);

    for(i=0; i<tamanho; i++){
        if(mensagem[i] == '1'){
            pares++;
        }
    }
    if(pares%2 == 0){
        mensagem[tamanho] = '0';
    }else {
        mensagem[tamanho] = '1';
    }

    mensagem[tamanho+1] = '\0';

    printf("%s\n",mensagem);

    return 0;
}
