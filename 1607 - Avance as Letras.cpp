#include <iostream>
using namespace std;

int main() {
    char string1[10010], string2[10010];
    unsigned short casos;
    unsigned int soma;
    short aux;

    cin >> casos;

    while (casos--) {
        cin >> string1 >> string2;

        soma = 0;
        for (unsigned short i = 0; string1[i]; i++) {
            aux = string2[i] - string1[i];
            if (aux < 0)
                soma += aux + 26;
            else
                soma += aux;
        }

        cout << soma << endl;
    }

    return 0;
}
