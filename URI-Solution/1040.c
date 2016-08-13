#include<stdio.h>
int main()
{
    float n1, n2, n3, n4, n, avg;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    avg = ((n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0))/10.0;
    if(avg >= 7.0){
        printf("Media: %.1f\nAluno aprovado.\n", avg);
    }
    if(avg <= 4.9){
        printf("Media: %.1f\nAluno reprovado.\n", avg);
    }
    if(avg >= 5.0 && avg <= 6.9){
        printf("Media: %.1f\nAluno em exame.\n", avg);
        scanf("%f", &n);
        printf("Nota do exame: %.1f\n", n);
        avg = (avg+n)/2.0;
        printf("Aluno aprovado.\nMedia final: %.1f\n", avg);
    }
    return 0;
}
