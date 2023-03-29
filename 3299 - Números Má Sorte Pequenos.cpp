#include <iostream>

using namespace std;

int main()
{
    string N;
    bool flag = false;
    cin>>N;
    for(int i=0; i<N.size(); i++){
        if(N[i] == '1' && N[i+1] == '3'){
            flag = true;
        }
    }
    if(flag){
        cout<<N<<" es de Mala Suerte"<<endl;
    }
    else {
        cout<<N<<" NO es de Mala Suerte"<<endl;
    }
    
    return 0;
}
