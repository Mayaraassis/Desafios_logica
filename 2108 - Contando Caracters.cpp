#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string maior;

string encontreMaior(string a, string b) {
    return (a.size() > b.size()) ? a : b;
}

int main() {
    string linha;
    getline(cin, linha);

    while (linha != "0") {
        vector<string> palavras;
        size_t inicio = 0;
        size_t fim = linha.find(' ');

        while (fim != string::npos) {
            palavras.push_back(linha.substr(inicio, fim - inicio));
            inicio = fim + 1;
            fim = linha.find(' ', inicio);
        }

        palavras.push_back(linha.substr(inicio));

        for (size_t i = 0; i < palavras.size(); i++) {
            cout << palavras[i].size();
            if (i < palavras.size() - 1) {
                cout << "-";
            }
            maior = encontreMaior(maior, palavras[i]);
        }

        cout << endl;
        getline(cin, linha);
    }

    cout << endl << "The biggest word: " << maior << endl;

    return 0;
}
