#include <iostream>
#include  <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){

string str1, str2, str3;

int n =10;
getline(cin,str1);
getline(cin,str2);
getline(cin,str3);


cout<<str1<<str2<<str3<<endl;
cout<<str2<<str3<<str1<<endl;
cout<<str3<<str1<<str2<<endl;
str1= str1.substr(0,10);
str2= str2.substr(0,10);
str3= str3.substr(0,10);
cout<<str1<<str2<<str3<<endl;



}
