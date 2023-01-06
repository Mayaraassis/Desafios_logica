#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string name;
    cin>>name;
    printf((name.size()>80)?"NO\n":"YES\n");
    return 0;
}
