#include <stdio.h>

int main(){
//by Luiz Fernando
int i;
char letra[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char l;
scanf("%c", &l);

for (i=0;i<=25;i++){
        if(letra[i] == l){
            printf("%d\n",i+1);
            break;
}
}
return 0;
}
