#include <iostream>
#include <string>
using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);
    int dias = 0;

    while (!cin.eof()) {
        int mes = stoi(entrada.substr(entrada.find(" ") + 1, entrada.find_last_of(" ") - entrada.find(" ") - 1));
        int dia = stoi(entrada.substr(entrada.find_last_of(" ") + 1));

        switch (mes) {
            case 1:
                dias = (31 - dia) + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 25;
                break;
            case 2:
                dias = (29 - dia) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 25;
                break;
            case 3:
                dias = (31 - dia) + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 25;
                break;
            case 4:
                dias = (30 - dia) + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 25;
                break;
            case 5:
                dias = (31 - dia) + 30 + 31 + 31 + 30 + 31 + 30 + 25;
                break;
            case 6:
                dias = (30 - dia) + 31 + 31 + 30 + 31 + 30 + 25;
                break;
            case 7:
                dias = (31 - dia) + 31 + 30 + 31 + 30 + 25;
                break;
            case 8:
                dias = (31 - dia) + 30 + 31 + 30 + 25;
                break;
            case 9:
                dias = (30 - dia) + 31 + 30 + 25;
                break;
            case 10:
                dias = (31 - dia) + 30 + 25;
                break;
            case 11:
                dias = (30 - dia) + 25;
                break;
            default:
                dias = -2;
        }

        if (mes == 12 && dia <= 25) {
            dias = 25 - dia;
        } else if (mes == 12 && dia > 25) {
            dias = -1;
        }

        if (dias == 0) {
            cout << "É Natal!" << endl;
        } else if (dias == 1) {
            cout << "É véspera de Natal!" << endl;
        } else if (dias == -1) {
            cout << "Já passou!" << endl;
        } else if (dias > 1) {
            cout << "Faltam " << dias << " dias para o Natal!" << endl;
        }

        getline(cin, entrada);
    }

    return 0;
}
