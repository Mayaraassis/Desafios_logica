#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<string> pomekons;
    for (int i = 0; i < N; i++) {
        string pomekon;
        cin >> pomekon;
        pomekons.insert(pomekon);
    }

    int missing = 151 - pomekons.size();
    cout << "Falta(m) " << missing << " pomekon(s)." << endl;

    return 0;
}
