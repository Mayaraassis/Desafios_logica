#include <iostream>

using namespace std;

int main()
{

    int S, T, F, result, soma = 0;


    cin>>S>>T>>F;
    soma = S + T;
    int aux = 0;
    result = soma + F;
    if(soma > 23)
    {
        if(soma == 24)
        {
            if(F>0)
            {
                cout<<0 + F<<endl;
            }
            else
            {
                cout<<24 + F<<endl;
            }

        }
        else
        {
            aux = soma - 24;
            cout<<aux + F<<endl;
        }
    }
    else if ((result) < 0)
    {
        cout<<24+result<<endl;
    }
    else
    {
        cout<<result<<endl;
    }

}
