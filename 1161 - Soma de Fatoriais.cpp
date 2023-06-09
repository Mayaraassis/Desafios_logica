#include <iostream>

using namespace std;

long long int fatorial(int n) {
    long long int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int M, N;

    while (cin >> M >> N) {
        long long int fatorialM = fatorial(M);
        long long int fatorialN = fatorial(N);
        long long int somaFatoriais = fatorialM + fatorialN;
        cout << somaFatoriais << endl;
    }

    return 0;
}
