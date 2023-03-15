#include <stdio.h>

int main() {
    char x_inicial, x_final;
    int  y_inicial, y_final;
    int dist_x, dist_y;

    scanf(" %c",&x_inicial);
    scanf(" %d",&y_inicial);
    scanf(" %c",&x_final);
    scanf(" %d",&y_final);

    dist_x = x_inicial - x_final;
    dist_y = y_inicial - y_final;

    if(dist_x < 0)dist_x *= -1;
    if(dist_y < 0)dist_y *= -1;

    
    if((dist_x == 2 && dist_y == 1) || (dist_x == 1 && dist_y == 2))printf("VALIDO\n");
    else printf("INVALIDO\n");

    return 0;
}
