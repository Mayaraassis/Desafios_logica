


#include <iostream>

using namespace std;

int main()
{
    int N, A, B, pj1=0, pj2=0;
    while(cin>>N && N!=0){
        for(int i=0;i<N;i++){
            cin>>A>>B;
            if(A>B){
                pj1++;
            }
            else if (B>A){
                pj2++;
            }
        }
        cout<<pj1<<" "<<pj2<<endl;
        pj1=0;
        pj2=0;
    }
    

    return 0;
}
