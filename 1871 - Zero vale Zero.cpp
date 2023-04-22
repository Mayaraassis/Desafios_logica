
#include <iostream>

using namespace std;

int main()
{
    int N, M, soma=0;
    string str, aux, saida;
    while(cin>>N>>M && (N!=0 && M!=0)){
        soma=N+M;
        str=to_string(soma);
        for(int i=0; i<str.length();i++){
            aux= str[i];
            if(aux!="0"){
                saida+=aux;
            }
        }
        cout<<saida<<endl;
        soma=0;
        saida="";
    }

    return 0;
}
