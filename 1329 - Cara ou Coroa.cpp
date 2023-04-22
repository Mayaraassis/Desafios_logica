

#include <iostream>

using namespace std;

int main()
{
    int N, mary=0,john=0,op;
    while(cin>>N && N!=0){
        for(int i=0;i<N;i++){
            cin>>op;
            if(op==0){
                mary++;
            }
            else {
                john++;
            }
        }
        cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl;
        mary=0;
        john=0;
    }
    

    return 0;
}
