#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int N;
    string str;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; ++i){
        getline(cin, str);

        reverse(str.begin(), str.begin() + str.length()/2);
        reverse(str.begin() + str.length()/2, str.end());

        cout << str << endl;
    }

    return 0;
}
