
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin>>N>>K;
    string nome;
    vector<string>nomes;
    for(int i=0;i<N;i++){
      cin>>nome;
      nomes.push_back(nome);
    }
    sort(nomes.begin(), nomes.end());
    cout<<nomes[K-1]<<endl;


    return 0;
}
