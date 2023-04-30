#include <iostream>
#include <string>

using namespace std;
int main() {
    string n1, n2;
    int aux=1;
    while (cin >> n1 >> n2) {
        int count = 0, pos = -1;

        for (int i = 0; i < n2.size(); i++) {
            if (n2[i] == n1[0]) { // encontra a primeira ocorrencia do primeiro digito de n1 em n2
                int j = 1;
                while (j < n1.size() && (i+j) < n2.size() && n2[i+j] == n1[j]) { // verifica se os digitos subsequentes de n1 ocorrem em sequencia em n2
                    j++;
                }
                if (j == n1.size()) { // encontrou subsequencia contigua
                    count++;
                    pos = i+1;
                }
            }
        }
        cout<<"Caso #"<<aux<<":"<<endl;
        if (count == 0) {
            cout << "Nao existe subsequencia" << endl;
        } else {
            cout <<"Qtd.Subsequencias: "<< count<<endl << "Pos: " << pos << endl;
        }
        aux++;
        cout<<endl;
    }

    return 0;
}
