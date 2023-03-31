

#include <iostream>

using namespace std;

int main()
{
    int N, boneca=0, carrinho=0;
    string nome, sexo;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>nome>>sexo;
        if(sexo == "F"){
            boneca++;
        }
        else if(sexo == "M"){
            carrinho++;
        }
    }
    cout<<carrinho<<" carrinhos"<<endl;
    cout<<boneca<<" bonecas"<<endl;

    return 0;
}
