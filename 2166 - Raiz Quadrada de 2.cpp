
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double fracao = 0.0;
    for(int i=0;i<n;i++){
        fracao = 1.0 / (2.0 + fracao);
    }
    cout<<fixed<<setprecision(10)<<1.0 +fracao<<endl;
    return 0;
}
