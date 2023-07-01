#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n, total, i, tam, letras[26];
    string frase;
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, frase);
        tam = frase.size();
        memset(letras, 0, sizeof(letras));
        for (i = 0; i < 26; i++)
            if (frase.find(alfabeto[i]) < tam)
                letras[i] = 1;
        total = 0;
        for (i = 0; i < 26; i++)
            total += letras[i];
        cout << "frase ";
        if (total == 26)
            cout << "completa" << endl;
        else if (total > 12)
            cout << "quase completa" << endl;
        else
            cout << "mal elaborada" << endl;
    }
    return 0;
}
