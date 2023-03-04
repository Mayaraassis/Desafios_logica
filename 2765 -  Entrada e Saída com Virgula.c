#include <stdio.h>
int main(){
    char str[128];
    int i=0;

    fgets(str,128,stdin);

    while(str[i] != ',' && str[i+1] != '\0'){
        printf("%c",str[i]);
        i++;
    }
    i++;
    
    if(str[i]!='\0')printf("\n");
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
}
