#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string extrairMensagemOculta(const string& texto) {
    stringstream ss(texto);
    string palavra;
    string mensagem;

    while (ss >> palavra) {
        mensagem += palavra[0];
    }

    return mensagem;
}

int main() {
    int casosTeste;
    cin >> casosTeste;
    cin.ignore(); // Limpar o buffer de entrada após a leitura do inteiro

    for (int i = 0; i < casosTeste; i++) {
        string texto;
        getline(cin, texto);

        string mensagemOculta = extrairMensagemOculta(texto);
        cout << mensagemOculta << endl;
    }

    return 0;
}
