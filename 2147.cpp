#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, tam;
    double saida;
    cin>>n;
    string palavra;
    for(int i=0; i<n; i++)
    {
        cin>>palavra;
        tam=palavra.length();
        saida = tam/100.0;
        printf("%.2lf\n",saida);
    }

}
