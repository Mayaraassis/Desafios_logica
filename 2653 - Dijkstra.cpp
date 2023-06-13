#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> tipos_de_joias;
    string joia;

    while (getline(cin, joia) && !joia.empty()) {
        tipos_de_joias.insert(joia);
    }

    cout << tipos_de_joias.size() << endl;

    return 0;
}
