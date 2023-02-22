#include <iostream>
using namespace std;

int main()
{

    int T,i=0;
    float num, menor=0;

    while(cin>>T){
        for(i=0;i<T;i++){
            cin>>num;
            if(i==0){
                menor = num;
            }
            if(num<menor){
                menor = num;
            }

        }
        cout<<menor<<endl;
        menor = 0;

    }

}
