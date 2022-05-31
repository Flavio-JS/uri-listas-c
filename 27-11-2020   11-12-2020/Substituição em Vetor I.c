#include <stdio.h>

int main() {
    int X[10], i;
    for(i=0; i<10; i++){
        scanf("%d", &X[i]);
    }
    i=0;
    while(i<10){
        if(X[i]<=0){
                X[i]=1;
    }
    printf("X[%d] = %d\n", i, X[i]);
    i++;
    }
return 0;
}
