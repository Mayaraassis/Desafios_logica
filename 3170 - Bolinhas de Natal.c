#include <stdio.h>

int main() {
    int galhos, bolinhas;

    scanf("%d %d",&bolinhas, &galhos);

    if(bolinhas < galhos/2){
        bolinhas = galhos/2 - bolinhas;
        printf("Faltam %d bolinha(s)\n",bolinhas);
    }else{
        printf("Amelia tem todas bolinhas!\n");
    }

    return 0;
}
