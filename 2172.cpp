#include <iostream>

using namespace std;

int main()
{

    long long int X, M;


    do
    {
        cin>>X>>M;
        if(X==0 && M == 0)
        {
            break;
        }
        else
        {
            cout<<X*M<<endl;
        }
    }
    while(X!= 0 && M!=0);

}
