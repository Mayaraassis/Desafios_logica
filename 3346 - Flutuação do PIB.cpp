

#include <iostream>

using namespace std;

int main()
{
    double f1, f2, result=0.0;
    cin>>f1>>f2;
    result = ((((1.0 + f1/100.00) * (1.0 + f2/100.00)) - 1.0) * 100.0);
    printf("%.6lf\n",result);

    return 0;
}
