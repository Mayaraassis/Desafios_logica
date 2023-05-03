#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, q;
    while (cin >> n >> q) {
        vector<int> notas(n);
        for (int i = 0; i < n; i++) {
            cin >> notas[i];
        }
        sort(notas.begin(), notas.end(), greater<int>());
        for (int i = 0; i < q; i++) {
            int posicao;
            cin >> posicao;
            cout << notas[posicao - 1] << endl;
        }
    }
    return 0;
}
