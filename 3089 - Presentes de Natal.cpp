#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int tam = 2*n;
        int a[tam];
        for (int i = 0; i < tam; i++) {
            cin >> a[i];
        }
        sort(a, a + 2*n); 

    int min_sum = INT_MAX, max_sum = INT_MIN;
    for (int i = 0; i < tam/2; i++) {
        int sum = a[i] + a[tam-1-i]; 
        if (sum < min_sum) min_sum = sum; 
        if (sum > max_sum) max_sum = sum; 
    }
        cout << max_sum << " " << min_sum << endl;
    }
    return 0;
}
