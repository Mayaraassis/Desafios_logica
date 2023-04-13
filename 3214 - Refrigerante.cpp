#include <iostream>

using namespace std;

int main() {
    int E, F, C, total_garrafas=0, refrigerantes_bebidos =0, refrigerantes_comprados=0;
    cin >> E >> F >> C;

    total_garrafas = E + F;
    
    while (total_garrafas >= C) {
        
        refrigerantes_comprados = total_garrafas / C;

        refrigerantes_bebidos += refrigerantes_comprados;

        total_garrafas = refrigerantes_comprados + (total_garrafas % C);
    }

    cout << refrigerantes_bebidos << endl;

    return 0;
}
