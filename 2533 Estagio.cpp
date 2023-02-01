#include <iostream>

using namespace std;

int main(){
    int somaN = 0, somaC = 0, N = 0, Nota = 0, Carga= 0, aux=0;
    double IRA = 0;
    while(cin>>N){
        for(int i=0; i<N; i++){
        cin>>Nota>>Carga;
        aux = Nota * Carga;
        somaN+=aux;
        somaC+=Carga;
        }

        IRA = somaN/(somaC*100.0);
        printf("%.4lf\n",IRA);

        somaN = 0;
        somaC = 0;
    }

}
