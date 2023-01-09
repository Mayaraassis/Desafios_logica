#include <iostream>

using namespace std;

int main()
{
    int N;
    string j1, j2;
    cin>>N;

    for(int i=0; i< N; i++)
    {
        cin>>j1>>j2;
        if (j1 == "ataque" && j2 == "pedra"){
         cout<<"Jogador 1 venceu"<<endl;
        }
        else if (j1 == "pedra" && j2 == "ataque"){
         cout<<"Jogador 2 venceu"<<endl;
        }
        else if (j1 == "pedra" && j2 == "papel"){
             cout<<"Jogador 1 venceu"<<endl;
        }
         else if (j1 == "papel" && j2 == "pedra"){
              cout<<"Jogador 2 venceu"<<endl;
        }
         else if (j1 == "papel" && j2 == "ataque"){
              cout<<"Jogador 2 venceu"<<endl;
        }
         else if (j1 == "ataque" && j2 == "papel"){
            cout<<"Jogador 1 venceu"<<endl;
        }
         else if (j1 == "papel" && j2 == "papel"){
            cout<<"Ambos venceram"<<endl;
        }
        else if (j1 == "pedra" && j2 == "pedra"){
            cout<<"Sem ganhador"<<endl;
        }
         else if (j1 == "ataque" && j2 == "ataque"){
            cout<<"Aniquilacao mutua"<<endl;
        }

    }

}
