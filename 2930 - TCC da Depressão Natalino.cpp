
#include <iostream>

using namespace std;

int main()
{
    
    int E, D, dif;
    cin>>E>>D;
    dif = D-E;
    
    if(dif>=3){
        cout<<"Muito bem! Apresenta antes do Natal!"<<endl;
    }
    else if(dif<0){
        
        cout<<"Eu odeio a professora!"<<endl;
    }
    else {
        cout<<"Parece o trabalho do meu filho!"<<endl;
        if((E+2) < 24){
            
            cout<<"TCC Apresentado!"<<endl;
        }
        else{
            cout<<"Fail! Entao eh nataaaaal!"<<endl;
        }
    }
    
   
    return 0;
}
