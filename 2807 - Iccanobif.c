
#include <iostream>

using namespace std;

int main()
{
    int N, vet[41], aux = 1;
    cin>>N;
    vet[0] = 1;
    vet[1] = 1;
    for(int i=2;i<N; i++){
            vet[i] = vet[i-1] + vet[i-2];
    }
    
    for(int i = N-1; i>=0; i--){
        if(i == 0){
             cout<<vet[i];
        }
        else{
             cout<<vet[i]<<" ";
        }
       
    }
    cout<<endl;
    return 0;
}
