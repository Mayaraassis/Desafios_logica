#include <iostream>

using namespace std;

int main(){

int N;

cin>>N;

int vet[N];
int aux = 0;

for(int i=0; i<N; i++){
    cin>>vet[i];
}


for(int j=0;j<N;j++){

    if(j!=0 && vet[j]<vet[j-1]){
        cout<<j+1<<endl;
        break;
    }
    else{
        aux++;
    }
}

if(aux == N){
    cout<<"0"<<endl;
}


}
