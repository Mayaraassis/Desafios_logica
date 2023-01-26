#include <iostream>
using namespace std;

int main()
{

    int N, H, M, O;

    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>H>>M>>O;

        if(O == 1)
        {
            printf("%.2d:%.2d - A porta abriu!\n", H, M);

        }
        else
        {
            printf("%.2d:%.2d - A porta fechou!\n", H, M);

        }

    }

}
