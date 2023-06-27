
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, k;
    string str;
    cin>>N;
   
    
    for(int i=0; i<N; i++){
        cin>>k;
        vector <string> vet(k);
        
        for(int j=0; j<k; j++){
            cin>>str;
            vet[j] = str;
        }
        
        string aux = vet[0];
        bool ingles = false;
        
        for(int m=1; m<vet.size(); m++){
            if(vet[m]!= aux)
            {
                ingles = true;
                break;
            }

        }
        
        if(ingles){
            cout<<"ingles"<<endl;
        }
        else {
            cout<<aux<<endl;
        }
    }
    

    return 0;
}
