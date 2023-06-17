#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        char digito1, letra, digito2;
        cin >> digito1 >> letra >> digito2;

        int resultado;

        if (isdigit(digito1) && isdigit(digito2)) {
            int d1 = digito1 - '0';
            int d2 = digito2 - '0';

            if (letra >= 'a' && letra <= 'z') {
                if (d1 == d2) {
                    resultado = d1 * d2;
                } else {
                    resultado = d1 + d2;
                }
            } else if (letra >= 'A' && letra <= 'Z') {
                if (d1 == d2) {
                    resultado = d1 * d2;
                }
                else{
                resultado = d2 - d1;
                }
            }
        } else {
            resultado = 0;
        }

        cout << resultado << endl;
    }

    return 0;
}
