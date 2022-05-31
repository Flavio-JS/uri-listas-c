#include <stdio.h>

int main(){

int h1,m1,mt1,h2,m2,mt2,hj,mj,mtj;
/*h1 e m1 são a hora e o minuto que o jogo iniciou respectivamente
mt1 são os minutos totais do horário que começou o jogo, por exempo, 02:30 = 150 minutos
h2 e m2 são a hora e o minuto que o jogo terminou respectivamente
mt2 são os minutos totais do horário que terminou o jogo
hj e mj é a hora e o minuto que o jogo durou
mtj é o tempo em minutos que durou o jogo
*/
scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

mt1=h1*60+m1;
mt2=h2*60+m2;

mtj=mt2-mt1;

if(mtj<=0){
    mtj=mtj+24*60;
}
hj=mtj/60;
mj=mtj%60;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hj, mj);
return 0;
}
