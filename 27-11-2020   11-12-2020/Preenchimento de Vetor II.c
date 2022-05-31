#include <stdio.h>

int main() {
int N[1000], numero, i=0, preencher=0;
    scanf("%d", &numero);
    while(i<1000){
        while(preencher<numero){
            N[i]=preencher;
            printf("N[%d] = %d\n", i, preencher);
            preencher++;
            i++;
            if(i>999){
                return 0;
            }
        }
        preencher=0;
    }
return 0;
}
