#include <stdio.h>

int main(){

int x, y;
double n, icm;

scanf("%lf %d %d", &n, &x, &y);
icm=n/(x+y);
printf("%.2lf\n", icm);

return 0;
}
