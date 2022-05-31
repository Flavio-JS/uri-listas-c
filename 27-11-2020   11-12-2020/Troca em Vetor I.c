#include <stdio.h>

int main() {
    int N[20], i, r, n, t;
    for(i=0; i<20; i++){
        scanf("%d", &N[i]);
    }
    i=19;
    n=0;
    for(r=0; r<10; r++){
        t=N[i];
        N[i]=N[n];
        N[n]=t;
        i--;
        n++;
    }
    i=0;
    for(i=0; i<20; i++){
        printf("N[%d] = %d\n", i, N[i]);
    }
return 0;
}
