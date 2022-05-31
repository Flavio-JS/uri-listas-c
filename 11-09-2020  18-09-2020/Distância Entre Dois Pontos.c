#include <stdio.h>
#include <math.h>

int main(){
    float x1, y1, x2, y2, a, b, r;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    a = x1-x2;
    b = y1-y2;
    r = sqrt(pow(a,2)+pow(b,2));
    printf("%.4f\n", r);
    return 0;
}
