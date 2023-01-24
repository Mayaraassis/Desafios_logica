#include <iostream>

using namespace std;

int main()
{

    int C, energia;

    cin>>C;
    for(int i = 0; i<C; i++)
    {
        cin>>energia;
        if(energia>8000)
        {
            cout<<"Mais de 8000!"<<endl;
        }
        else
        {
            cout<<"Inseto!"<<endl;
        }

    }

}
