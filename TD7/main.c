#include <stdio.h>
#include <stdlib.h>

int imprime_inverse(int N);
void ex1(void);

void ex2a(void);
float pow_N(float a, int N);

float pow_R(float a, int N);
void ex2b(void);

void ex3(void);

int main()
{

    printf("Hello world!\n");
//    ex1();
//    ex2a();
//    ex2b();
ex3();
    return 0;
}


int imprime_inverse(int N){

    while (N>0){
        printf("%d\n",N%10);
        N=N/10;
    }
    return 0;

}
void ex1(void){
    imprime_inverse(56512891);
}

float pow_N(float a, int N){

    if(N<0) return -1;
    if(N==0) return 1;

    float res = a;

    for (int i=0;i<N-1;i++)
    {
        res = res*a;
    }
//    printf("%.2f\n",res);
    return res;
}

void ex2a(void){
    pow_N(2,5);
    pow_N(5,7);

}


float pow_R(float a, int N){

    if(N<0) return -1;
    if(N==0) return 1;

    return a*pow_R(a,N-1);

}



void ex2b(void){
    float res1 = pow_R(2,5);
    printf("%.2f\n",res1);
    float res2 = pow_R(5,7);
    printf("%.2f",res2);


}


void ex3(void)
{
    FILE *f = fopen("copie.txt", "w");

    int c;

    c = fgetc(stdin);

    while(c != '\n')
    {
        putc(c, f);
        c = fgetc(stdin);
    }

    fclose(f);
}



















