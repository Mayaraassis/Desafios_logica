
#include <iostream>

using namespace std;

int main()
{
    int ano,seculo;
    while(cin>>ano){
        if(ano<=100){
            seculo = 1;
        }
        else {
            if(ano % 100 == 0){
                seculo = ano/100;
            }
            else{
                seculo = (ano / 100)+1;
            }
            
        }
        cout<<seculo<<endl;
    }

    return 0;
}
