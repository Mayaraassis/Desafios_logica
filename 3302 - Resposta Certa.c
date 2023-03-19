
#include <iostream>
using namespace std;
int main() {
    int N, val, i=0;
    while(cin>>N){
        for(i=0;i<N; i++){
            cin>>val;
            cout<<"resposta "<<i+1<<": "<<val<<endl;
        }
    }


    return 0;
}
