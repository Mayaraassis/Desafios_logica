#include <iostream>
#include <string>
using namespace std;

bool isRisadaEngracada(const string& risada) {
    string vogais;
    for (int i = 0; i < risada.length(); i++) {
        char c = risada[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais += c;
        }
    }

    int tamanho = vogais.length();
    for (int i = 0; i < tamanho / 2; i++) {
        if (vogais[i] != vogais[tamanho - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string risada;
    cin >> risada;

    if (isRisadaEngracada(risada)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
