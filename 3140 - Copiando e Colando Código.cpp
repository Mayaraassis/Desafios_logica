#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool insideBody = false;
    string bodyContent = "";

    while (getline(cin, line)) {
        if (line.find("<body>") != string::npos) {
            insideBody = true;
            continue;
        }

        if (line.find("</body>") != string::npos) {
            insideBody = false;
            break;
        }

        if (insideBody) {
            bodyContent += line + "\n";
        }
    }

    cout << bodyContent;

    return 0;
}
