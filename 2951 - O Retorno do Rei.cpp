
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int N, G,tam,valor, soma=0;
    char letra, l2;
    map<char, int> valores;
    cin>>N>>G;
    while(n-- > 0){
        cin>>letra>>valor;
        valores.insert(make_pair(letra,valor));
    }
    cin>>tam;
    while(tam-- > 0){
        cin>>l2;
        soma += valores[l2];
    }
    cout<<soma<<endl;
    if(soma >= G){
         cout << "You shall pass!" << endl;
    }
    else {
         cout << "My precioooous" << endl;
    }
    return 0;
}
