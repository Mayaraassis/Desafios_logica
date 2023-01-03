#include <iostream>
using namespace std;

int main(){
int N, i,number, dois=0, tres=0, quatro=0, cinco=0;

cin>> N;

for(i=0;i<N;i++){
cin>> number;

if(number % 2 == 0){
dois++;

}
if(number % 3 == 0){
tres++;

}
if(number % 4 == 0){
quatro++;
}
if(number % 5 == 0){
cinco++;

}

}

cout<<dois<<" Multiplo(s) de 2"<<endl;
cout<<tres<<" Multiplo(s) de 3"<<endl;
cout<<quatro<<" Multiplo(s) de 4"<<endl;
cout<<cinco<<" Multiplo(s) de 5"<<endl;

return 0;
}
