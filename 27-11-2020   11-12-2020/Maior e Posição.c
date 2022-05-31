#include<stdio.h>

int main(){
    int n[100], i, t=0, p=0;
    for(i=0; i<100;i++){
        scanf("%d", &n[i]);
        if(n[i]>t){
            t=n[i];
            p=i;
        }
    }
    printf("%d\n%d\n", t, p+1);
return 0;
}
