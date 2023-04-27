#include<iostream>
using namespace std;

int main() {

int notas[]={100, 50, 20, 10, 5, 2};
int n, m, resposta=0;
while(cin>>n>>m && (n!=0 && m!=0)){
    int troco=m-n;
    for(int i=0; i<6; i++){
        if(notas[i]<=troco){
            troco-=notas[i];
            resposta++;
        }
    }

    if(resposta==2){ cout << "possible" << endl; }
    else{ cout << "impossible" << endl; }

    resposta=0;
}

return 0;
}
