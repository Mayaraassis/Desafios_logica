#include <iostream>
#include <string>
using namespace std;

string subtractDigitFromString(const string& num, char digit) {
    string result = "";
    for (int i = 0; i < num.length(); i++) {
        if (num[i] != digit) {
            result += num[i];
        }
    }
    return result;
}

int main() {
    int D;
    string N;
    string str, dig, saida;
    while (cin >> D >> N && (D != 0 && N != "0")) {
        dig = to_string(D);
        saida = subtractDigitFromString(N, dig[0]);
        size_t first_non_zero = saida.find_first_not_of('0');
        if (first_non_zero != string::npos) {
            saida = saida.substr(first_non_zero);
        } else {
            saida = "0";
        }
        cout << saida << endl;
    }

    return 0;
}
