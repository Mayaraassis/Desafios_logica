#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int reconhecerPalavra(string palavra) {
    unordered_map<string, int> mapeamento = {
        {"one", 1},
        {"two", 2},
        {"three", 3}
    };

    int tamanho = palavra.length();
    if (tamanho == 3) {
        // Verificar se a palavra corresponde a "one" ou "two"
        int erroCount = 0;
        if (palavra[0] != 'o') erroCount++;
        if (palavra[1] != 'n') erroCount++;
        if (palavra[2] != 'e') erroCount++;
        if (erroCount <= 1) {
            return 1;
        }
        erroCount = 0;
        if (palavra[0] != 't') erroCount++;
        if (palavra[1] != 'w') erroCount++;
        if (palavra[2] != 'o') erroCount++;
        if (erroCount <= 1) {
            return 2;
        }
    } else if (tamanho == 5) {
        // Verificar se a palavra corresponde a "three"
        int erroCount = 0;
        if (palavra[0] != 't') erroCount++;
        if (palavra[1] != 'h') erroCount++;
        if (palavra[2] != 'r') erroCount++;
        if (palavra[3] != 'e') erroCount++;
        if (palavra[4] != 'e') erroCount++;
        if (erroCount <= 1) {
            return 3;
        }
    }

    return mapeamento[palavra];
}

int main() {
    int N;
    cin >> N;

    while (N > 0) {
        string palavra;
        cin >> palavra;

        int valorNumerico = reconhecerPalavra(palavra);
        cout << valorNumerico << endl;

        N--;
    }

    return 0;
}
