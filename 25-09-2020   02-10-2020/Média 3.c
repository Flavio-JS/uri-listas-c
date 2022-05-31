#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media, nr;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1*2+n2*3+n3*4+n4)/10;
    if (media>=7){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }
    if (media<5){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    if (media>=5 && media<=6.9){
        scanf("%f", &nr);
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", nr);
        media = (media+nr)/2;
        if (media>=5){
            printf("Aluno aprovado\n");
            printf("Media fianl: %.1f", media);
        }
        else
            printf("Aluno reprovado\n");
    }
return 0;
}
