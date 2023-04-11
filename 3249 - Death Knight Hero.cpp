
#include <iostream>

using namespace std;

int main()
{
    int N, flag=0, count=0;
    string str;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>str;
        for(int j=0; j< str.length(); j++){
            if(str[j]== 'C' && str[j+1]== 'D'){
                flag = 1;
            }
        }
        if(flag == 0){
            count++;
        }
        flag = 0;
        
    }
    cout<<count<<endl;

    return 0;
}
