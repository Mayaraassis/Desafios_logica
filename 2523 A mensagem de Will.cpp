#include <iostream>

using namespace std;

int main()
{

    string alfabeto;
    int N;
    while(cin>>alfabeto)
    {

        cin>>N;
        int vet[N];

        for(int i=0; i<N; i++)
        {
            cin>>vet[i];
        }
        for(int j=0;j<N;j++){
            int aux = vet[j];
            cout<<alfabeto[aux-1];
        }
        cout<<endl;

    }

}
