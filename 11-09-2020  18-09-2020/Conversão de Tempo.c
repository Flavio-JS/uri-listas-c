#include <stdio.h>

int main() {
    int a, s, m, h;
    scanf("%d", &a);
    h=a/3600;
    m=(a%3600)/60;
    s=((a%3600)%60);
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}
