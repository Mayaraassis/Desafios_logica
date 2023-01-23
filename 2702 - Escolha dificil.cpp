#include <iostream>
#include <string>
using namespace std;

int main()
{

    int Ca, Ba, Pa;
    int Cr, Br, Pr;
    int aux=0, a=0,b=0,c=0;
    cin>>Ca>>Ba>>Pa;
    cin>>Cr>>Br>>Pr;
    if((Cr<= Ca) && (Br<=Ba) && (Pr<=Pa))
    {
        cout<<0<<endl;
    }
    else
    {
        if(Cr>Ca)
        {
            a = Cr - Ca;
        }
        if(Br>Ba)
        {
            b = Br - Ba;
        }
        if(Pr>Pa)
        {
            c = Pr - Pa;
        }

        aux  = a + b + c;
        cout<<aux<<endl;
    }


}
