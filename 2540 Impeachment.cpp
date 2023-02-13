#include <iostream>
using namespace std;

int main()
{

    int N, voto, ip=0, i=0;


    while(cin>>N)
    {

        for(i=0; i<N; i++)
        {

            cin>>voto;
            if(voto == 1 )
            {
                ip++;
            }

        }

        if(ip>= ((N*2)/3.0))
        {
            cout<<"impeachment"<<endl;
        }
        else
        {
            cout<<"acusacao arquivada"<<endl;
        }

    ip = 0;
    }


}
