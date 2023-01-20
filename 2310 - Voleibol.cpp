#include <iostream>

using namespace std;

int main()
{

    int N;

    cin>>N;

    int S, B, A, S1, B1, A1;
    int somaS=0, somaB=0, somaA=0, somaS1=0, somaB1=0, somaA1=0;
    string Nome;
    for(int i = 0; i<N; i++)
    {
        cin>>Nome>>S>>B>>A;
        cin>>S1>>B1>>A1;

        somaS+=S;
        somaB+=B;
        somaA+=A;
        somaS1+=S1;
        somaB1+=B1;
        somaA1+=A1;
    }

    double totalS=0, totalB=0, totalA=0;
    totalS = (somaS1 * 100.0)/somaS;
    totalB = (somaB1 * 100.0)/somaB;
    totalA = (somaA1 * 100.0)/somaA;

    printf("Pontos de Saque: %.2lf %%.\n", totalS);
    printf("Pontos de Bloqueio: %.2lf %%.\n", totalB);
    printf("Pontos de Ataque: %.2lf %%.\n", totalA);
}
