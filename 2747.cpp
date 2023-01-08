#include <iostream>
using namespace std;

int main()
{

    int i=0, j=0;
    for(i=0; i<39; i++)
    {
        cout<<"-";

    }
    cout<<endl;
    for(j=0; j<5; j++)
    {
        for(i=0; i<39; i++)
        {
            if(i==0 || i == 38)
            {
                cout<<"|";
            }
            else
            {
                cout<<" ";
            }

        }

        cout<<endl;
    }
    for(i=0; i<39; i++)
    {
        cout<<"-";

    }

    cout<<endl;
    return 0;
}
