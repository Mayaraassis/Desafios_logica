
#include <iostream>

using namespace std;

int main()
{
    int N, A,B, soma=0;
    cin>>N>>A>>B;
    soma = A+B;
    if(soma > N){
        cout<<"Deixa para amanha!"<<endl;
    }
    else {
        cout<<"Farei hoje!"<<endl;
    }

    return 0;
}
