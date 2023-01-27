#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    long long int N;

    double Vmin, Vmax;

    cin>>N;
    Vmin = (double)N/(log(N));
    Vmax = (1.25506)* (N/log(N));

    printf("%.1lf %.1lf\n",Vmin, Vmax);
}
