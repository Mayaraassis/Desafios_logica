

#include <iostream>

using namespace std;

int main()
{
    int N, cont=0;
    string str, aux;
    cin>>N;
    for(int i=0; i<N;i++){
        cin>>str;
        for(int j=0;j<str.length();j++){
            aux=str[j];
            if(aux=="1"){
                cont+=2;
            }
            else if(aux=="2" || aux=="3" || aux=="5"){
                 cont+=5;   
            }
             else if(aux=="4"){
                 cont+=4;   
            }
             else if(aux=="7"){
                 cont+=3;   
            }
             else if(aux=="8"){
                 cont+=7;   
            }
             else if(aux=="6" || aux=="9" || aux=="0"){
                 cont+=6;   
            }
        }  
        cout<<cont<<" leds"<<endl;
        cont=0;
    }
    

    return 0;
}
