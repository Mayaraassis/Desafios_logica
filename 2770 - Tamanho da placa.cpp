#include <iostream>
using namespace std;

int main()
{
    int x,y,a,b;
    int m, m1, m2;

    while(cin>>x>>y>>m){
        m1 = (x < y? x : y);
        for(int i = 0; i<m; i++){
            cin>>a>>b;
            m2 = (a < b? a : b);
            if((a*b > x*y) || (a > x && a > y) || (b > x && b > y) || m2 > m1){
                cout<<"Nao"<<endl;
            }
            else{
                cout<<"Sim"<<endl;
            }

        }

    }

}

