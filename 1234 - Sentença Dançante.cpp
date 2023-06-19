#include <iostream>
#include <cctype>
using namespace std;

string transformar(const string& sentenca) {
    string sentencaD = sentenca;
    bool maiuscula = true;
    // bool maiuscula = isupper(sentencaD[0]);

    for (int i = 0; i < sentencaD.length(); i++) {
        if (isalpha(sentencaD[i])) {
            if (maiuscula) {
                sentencaD[i] = toupper(sentencaD[i]);
            } else {
                sentencaD[i] = tolower(sentencaD[i]);
            }
            maiuscula = !maiuscula;
        }
    }

    return sentencaD;
}

int main() {
    string sentenca;

    while (getline(cin, sentenca)) {
        cout << transformar(sentenca) << endl;
    }

    return 0;
}
