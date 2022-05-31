#include <stdio.h>

int main(){

float a,b,c,t;

scanf("%f %f %f", &a, &b, &c);

if(b>a){
    t=a;
    a=b;
    b=t;
}
if(c>a){
    t=a;
    a=c;
    c=t;
    }

if(a>=(b+c)){
    printf("NAO FORMA TRIANGULO\n");
    return 0;
}
if(a*a==b*b+c*c){
    printf("TRIANGULO RETANGULO\n");
}
if(a*a>b*b+c*c){
    printf("TRIANGULO OBTUSANGULO\n");
}
if(a*a<b*b+c*c){
    printf("TRIANGULO ACUTANGULO\n");
}
if(a==b && a==c){
    printf("TRIANGULO EQUILATERO\n");
}else if(a==b||a==c||b==c){
    printf("TRIANGULO ISOSCELES");
}
return 0;
}
