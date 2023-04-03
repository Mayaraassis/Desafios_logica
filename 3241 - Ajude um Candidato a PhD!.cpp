
#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int N, soma=0;
    cin>>N;
    string a,b,op;
    for(int i=0;i<N;i++){
        cin>>a>>op>>b;
        if(op=="="){
            cout<<"skipped"<<endl;
        }
        else{
            soma = stoi(a) + stoi(b);
            cout<<soma<<endl;
        }
    }

    return 0;
}
