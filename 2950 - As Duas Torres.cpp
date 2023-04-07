

#include <iostream>

using namespace std;

int main()
{
    int N,X,Y;
    double saida=0;
    cin>>N>>X>>Y;
    saida = (double)N/(X+Y);
    printf("%.2lf\n",saida);
    return 0;
}
