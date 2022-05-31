#include <stdio.h>

int main() {
    double N[100], numero;
    int i;
    scanf("%lf", &numero);
    for(i=0;i<100;i++){
        N[i]=numero;
        printf("N[%d] = %.4lf\n", i, numero);
        numero=numero/2;
    }
return 0;
}
