

#include <iostream>

using namespace std;

int main()
{
    int N, S, val;
    cin>>N>>S;
    int menor = S;
    for(int i=0; i<N;i++){
        cin>>val;
        S = S + val;
        if(S<menor){
            menor = S;
        }
    }
    cout<<menor<<endl;

    return 0;
}
