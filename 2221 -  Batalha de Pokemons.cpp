#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    int B,Ai, Di, Li;
    int A2i, D2i, L2i;
    double valorGolpe;
    double aux1, aux2;
    for(int i = 0; i<T; i++){
    cin>>B;
    cin>>Ai>>Di>>Li;
    cin>>A2i>>D2i>>L2i;
    if(Li%2== 0){
        aux1 = ((Ai + Di)/2.0)+B;
    }
    else{
        aux1 = ((Ai + Di)/2.0);
    }

    if(L2i%2 == 0){
        aux2 = ((A2i + D2i)/2.0)+B;
    }
    else{
        aux2 = ((A2i + D2i)/2.0);
    }

    if(aux1>aux2){
        cout<<"Dabriel"<<endl;
    }
    else if (aux1 == aux2){
        cout<<"Empate"<<endl;
    }
    else{
        cout<<"Guarte"<<endl;
    }
    }

}
