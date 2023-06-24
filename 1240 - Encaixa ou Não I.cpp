#include <iostream>
#include <string>
using namespace std;

bool verificaEncaixe(const string& A, const string& B) {
    int tamanhoA = A.length();
    int tamanhoB = B.length();

    if (tamanhoB > tamanhoA) {
        return false;
    }
    
    for (int i = 1; i <= tamanhoB; i++) {
        if (A[tamanhoA - i] != B[tamanhoB - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string A, B;
        cin >> A >> B;

        if (verificaEncaixe(A, B)) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}
