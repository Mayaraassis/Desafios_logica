
#include <iostream>

using namespace std;

int main()
{
    int p1,p2,c1,c2,esq,dir;
    cin>>p1>>c1>>p2>>c2;
    esq=p1*c1;
    dir=p2*c2;
    if(esq==dir){
        cout<<"0"<<endl;
    }
    else if(esq>dir){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"1"<<endl;
    }

    return 0;
}
