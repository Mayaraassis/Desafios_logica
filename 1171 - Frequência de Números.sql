#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> contagem;
    int numero;

    for (int i = 0; i < N; i++) {
        cin >> numero;
        contagem[numero]++;
    }

    for (const auto& par : contagem) {
        cout << par.first << " aparece " << par.second << " vez(es)" << endl;
    }

    return 0;
}
