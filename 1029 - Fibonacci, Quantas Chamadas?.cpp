

#include <iostream>

using namespace std;

int fib(int num, int&calls){
    calls++;
    if (num == 0){
        return 0;
    }
    else if (num == 1){
        return 1;
    }
    else return fib(num-1, calls) + fib(num - 2, calls); 
}
int main()
{
    int N;
    cin>>N;
    for (int i=0; i< N; i++){
        int calls = 0;
        int val;
        cin>>val;
        int result = fib(val, calls);
        cout <<"fib("<<val<<") = "<<calls-1<<" calls = "<<result <<endl;
    }
    return 0;
}
