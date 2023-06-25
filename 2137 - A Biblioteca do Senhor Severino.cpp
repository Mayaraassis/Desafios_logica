
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    string str;
    while(cin>>N){
        vector<string> lista(N);
        
        for(int i=0;i<N;i++){
            cin>>lista[i];
        }
        sort(lista.begin(), lista.end());
        
        for (int i=0;i<N; i++){
            cout<<lista[i]<<endl;
        }
    }

    return 0;
}
