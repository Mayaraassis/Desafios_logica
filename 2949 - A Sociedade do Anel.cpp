

#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    int N, A=0, E = 0, H=0, M=0, X=0, fim =0;
    string aux,str;
    cin>>N;
    for(int i=0; i<N;i++){
        cin.ignore();
        getline(cin, str);
        fim = str.length();
        aux = str[fim-1];
        if(aux == "A"){
            A++;
        }
        if(aux == "E"){
            E++;
        }
        if(aux == "H"){
            H++;
        }
        if(aux == "M"){
            M++;
        }
        if(aux == "X"){
            X++;
        }
     
    }
        cout<<X<<" Hobbit(s)"<<endl;
        cout<<H<<" Humano(s)"<<endl;
        cout<<E<<" Elfo(s)"<<endl;
        cout<<A<<" Anao(oes)"<<endl;
        cout<<M<<" Mago(s)"<<endl;
        
    return 0;
}
