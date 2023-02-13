#include <iostream>

using namespace std;

int main(){

int N, resto, cont=0;
while(cin>>N){
    resto = N;
    while(resto%2 == 0){
        cont++;
        resto = resto/2;
    }
    cout<<cont<<endl;
    cont = 0;
}


}
