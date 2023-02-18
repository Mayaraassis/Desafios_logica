#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d",&a,&b,&c);

    if(a+b > c && a+c > b && b+c > a){
        if( a == b && b == c){
            printf("Valido-Equilatero\n");
            printf("Retangulo: N\n");
        }else if(a == b || b == c || a == c){
            printf("Valido-Isoceles\n");
            if(a>b && a>c){
                if(b*b + c*c == a*a){
                    printf("Retangulo: S\n");
                }else{
                    printf("Retangulo: N\n");
                }
            } else if(b>a && b>c){
                if(a*a + c*c == b*b){
                    printf("Retangulo: S\n");
                }else{
                    printf("Retangulo: N\n");
                }
            } else{
                if(a*a + b*b == c*c){
                    printf("Retangulo: S\n");
                }else{
                    printf("Retangulo: N\n");
                }
            }
        }else{
            printf("Valido-Escaleno\n");
            if(a>b && a>c){
                if(b*b + c*c == a*a){
                    printf("Retangulo: S\n");
                }else{
                    printf("Retangulo: N\n");
                }
            } else if(b>a && b>c){
                if(a*a + c*c == b*b){
                    printf("Retangulo: S\n");
                }else{
                    printf("Retangulo: N\n");
                }
            } else{
                if(a*a + b*b == c*c){
                    printf("Retangulo: S\n");
                }else{
                    printf("Retangulo: N\n");
                }
            }
        }

    }else{
        printf("Invalido\n");
    }
    return 0;
}
