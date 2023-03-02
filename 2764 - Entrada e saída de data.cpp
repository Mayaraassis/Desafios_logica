#include <iostream>
using namespace std;

int main(){

int DD, MM, AA;
char barra;

cin>>DD>>barra>>MM>>barra>>AA;

printf("%.2d/%.2d/%.2d\n", MM, DD, AA);
printf("%.2d/%.2d/%.2d\n", AA, MM, DD);
printf("%.2d-%.2d-%.2d\n", DD, MM, AA);


}
