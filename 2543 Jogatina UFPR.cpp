#include <iostream>
using namespace std;

int main(){

int N, I, id, j, cont=0;

while(cin>>N>>I){

    for (int i=0; i<N; i++){
        cin>>id>>j;
        if(id == I){
            if(j == 0){
                cont++;
            }
        }

    }
    cout<<cont<<endl;
    cont = 0;

}


}
