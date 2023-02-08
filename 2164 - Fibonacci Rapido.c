#include <stdio.h>
#include <math.h>

int main() {
    int valor;
    double resultado;

    scanf("%d",&valor);

    resultado = (pow(((1+sqrt(5.0))/2),(double)valor) - pow(((1-sqrt(5.0))/2),(double)valor))/sqrt(5.0);

    printf("%.1lf\n",resultado);


    return 0;
}
