

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int horas, minutos, h, m;
    while(cin>>horas>>minutos){
        h = floor(horas/30);
        m = floor(minutos/6);
        printf("%02d:%02d\n", h, m);
    }

    return 0;
}
