#include <iostream>

using namespace std;

int main()
{

    unsigned long long int p;
    while(cin>>p && p != -1)
    {
        cout<<(p == 0 ? 0 : p-1)<<endl;

    }

}
