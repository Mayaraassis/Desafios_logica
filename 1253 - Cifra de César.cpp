#include <iostream>
#include <string>

using namespace std;

string decifraCesar(string texto, int deslocamento) {
    string decifrado = "";

    for (char c : texto) {
        int posicao = c - 'A';
        posicao = (posicao - deslocamento + 26) % 26;
        decifrado += 'A' + posicao;
    }

    return decifrado;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string texto;
        int deslocamento;

        cin.ignore();
        getline(cin, texto);
        cin >> deslocamento;

        string decifrado = decifraCesar(texto, deslocamento);

        cout << decifrado << endl;
    }

    return 0;
}
