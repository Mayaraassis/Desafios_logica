#include <stdio.h>
#include <string.h>

int main() {
    char papagaio[10];

    while(fgets(papagaio,10,stdin) != NULL){
        if(strncmp(papagaio,"esquerda",8) == 0)printf("ingles\n");
        else if(strncmp(papagaio,"direita",7) == 0)printf("frances\n");
        else if(strncmp(papagaio,"nenhuma",7) == 0)printf("portugues\n");
        else if(strncmp(papagaio,"as duas",7) == 0)printf("caiu\n");
    }

    return 0;
}
