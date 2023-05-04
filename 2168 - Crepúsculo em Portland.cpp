#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int mapa[n+1][n+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            cin >> mapa[i][j];
        }
    }
    
    char quadras[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int cont = 0;
            if (mapa[i][j] == 1) cont++;
            if (mapa[i][j+1] == 1) cont++;
            if (mapa[i+1][j] == 1) cont++;
            if (mapa[i+1][j+1] == 1) cont++;
            quadras[i][j] = (cont >= 2) ? 'S' : 'U';
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << quadras[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
