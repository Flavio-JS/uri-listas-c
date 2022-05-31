#include <stdio.h>
#include <stdlib.h>

int main() {
int x, y, n, t;
scanf("%d %d", &x, &y);
if(x>y){
    t=x;
    x=y;
    y=t;
}
for(n=x+1;n<=y-1;n++){
    if(n%5==2 || n%5==3)
        printf("%d\n", n);
}
return 0;
}
