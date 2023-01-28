#include <iostream>
using namespace std;

int main()
{

    int N, M, fechou=0, clicou=0;
    cin>>N>>M;
    string str;
    for(int i = 0; i<M; i++){

        cin>>str;
        if(str == "fechou"){
            fechou++;
        }
        else {
            clicou++;
        }
    }

    int saida = N + fechou - clicou;
    cout<<saida<<endl;
}
