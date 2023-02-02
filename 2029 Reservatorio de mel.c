#include <stdio.h>

int main()
{
    float v,d;
    float area, altura,raio;

    while(scanf("%f",&v) != EOF)
    {
        scanf("%f",&d);
        raio = d/2;
        area = raio*raio*3.14;
        altura = v/area;

        printf("ALTURA = %.2f\n",altura);
        printf("AREA = %.2f\n",area);
    }

    return 0;
}
