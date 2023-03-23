#include <iostream>

using namespace std;

int main()
{
    int H, E, A, O, W, X;
    cin>>H>>E>>A>>O>>W>>X;
    if((H+E+A+X)> (O+W)) {
        cout<<"Middle-earth is safe."<<endl;
    }
     else if((H+E+A+X)< (O+W)) {
        cout<<"Sauron has returned."<<endl;
    }
    else{
        cout<<"Middle-earth is safe."<<endl;
    }

    return 0;
}
