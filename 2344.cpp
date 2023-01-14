#include <iostream>

using namespace std;

int main()
{
    int N;


    cin>>N;
    if(N==0)
    {
        cout<<"E"<<endl;
    }
    else if(N>0 && N<36)
    {
        cout<<"D"<<endl;
    }
    else if(N>=36 && N<61)
    {
        cout<<"C"<<endl;
    }
    else if(N>=61 && N<86)
    {
        cout<<"B"<<endl;
    }
    else if(N>=86 && N<=100)
    {
        cout<<"A"<<endl;
    }


}
