#include <iostream>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    
    while (cin >> h1 >> m1 >> h2 >> m2 && (h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0)) {
        int minutos1 = h1 * 60 + m1;
        int minutos2 = h2 * 60 + m2;
        
        if (minutos2 <= minutos1) {
            minutos2 += 24 * 60; 
        }
        
        cout << minutos2 - minutos1 << endl;
    }
    
    return 0;
}
