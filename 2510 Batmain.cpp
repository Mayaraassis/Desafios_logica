#include <cstring>
#include <iostream>
using namespace std;
int main()
{



    int N;
    cin>>N;


   for(int j=0; j<N; j++)
    {
        string texto;
        cin>>texto;
        for(int i=0; i<texto.length(); i++)
        {
            texto[i] = tolower(texto[i]);
        }
        if(texto == "batmain")
        {

            cout<<"N"<<endl;
        }
        else
        {
            cout<<"Y"<<endl;
        }

    }
}
