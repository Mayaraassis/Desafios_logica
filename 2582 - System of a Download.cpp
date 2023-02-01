#include <iostream>

using namespace std;

int main()
{

    int C, b1,b2, soma=0;

    cin>>C;
    for(int i=0; i<C; i++)
    {
        cin>>b1>>b2;
        soma = b1 + b2;
        if(soma == 0)
        {
            cout<<"PROXYCITY"<<endl;
        }
        if(soma == 1)
        {
            cout<<"P.Y.N.G."<<endl;
        }
        if(soma == 2)
        {
            cout<<"DNSUEY!"<<endl;
        }
        if(soma == 3)
        {
            cout<<"SERVERS"<<endl;
        }
        if(soma == 4)
        {
            cout<<"HOST!"<<endl;
        }
        if(soma == 5)
        {
            cout<<"CRIPTONIZE"<<endl;
        }
        if(soma == 6)
        {
            cout<<"OFFLINE DAY"<<endl;
        }
        if(soma == 7)
        {
            cout<<"SALT"<<endl;
        }
        if(soma == 8)
        {
            cout<<"ANSWER!"<<endl;
        }
        if(soma == 9)
        {
            cout<<"RAR?"<<endl;
        }
        if(soma == 10)
        {
            cout<<"WIFI ANTENNAS"<<endl;
        }

    }

}
