#include <stdio.h>

int main(){

double A, B, aumento;

scanf("%lf %lf", &A, &B);
    aumento=(B*100/A)-100;
    printf("%.2lf%%\n", aumento);
return 0;
}
