#include <iostream>
#include <string>

using namespace std;

string combinador(const string& str1, const string& str2) {
    string result;
    int size1 = str1.size();
    int size2 = str2.size();
    int maxSize = max(size1, size2);

    for (int i = 0; i < maxSize; i++) {
        if (i < size1)
            result += str1[i];
        if (i < size2)
            result += str2[i];
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str1, str2;
        cin >> str1 >> str2;

        string combined = combinador(str1, str2);
        cout << combined << std::endl;
    }

    return 0;
}
