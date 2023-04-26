#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int gastos = 0;
    int verbas = 0;

    for (int i = 0; i < n; i++) {
        char tipo;
        int valor;
        cin >> tipo >> valor;

        if (tipo == 'G') {
            gastos += valor;
        } else {
            verbas += valor;
        }
    }

    if (verbas >= gastos) {
        cout << "A greve vai parar." << endl;
    } else {
        cout << "NAO VAI TER CORTE, VAI TER LUTA!" << endl;
    }

    return 0;
}
