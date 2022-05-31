#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
float t, n, m;
i=0;
n=0;
t=0;
while(i>=0){
    scanf("%d", &i);
    if(i>=0){
    t=t+i;
    n=n+1;
    }
}
m=t/n;
printf("%.2f\n", m);
return 0;
}
