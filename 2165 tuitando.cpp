#include <cstring>
#include <iostream>
using namespace std;
int main()
{


    string texto;

    getline(cin, texto);
    if(texto.length() <= 141)
    {

        cout<<"TWEET"<<endl;
    }
    else
    {
        cout<<"MUTE"<<endl;
    }
}
