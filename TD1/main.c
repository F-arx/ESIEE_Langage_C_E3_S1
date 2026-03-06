#include <stdio.h>
#include <stdlib.h>
 // Prototype
int somme_if(int N);
int somme_for(int N);
int somme_while(int N);

void ex2a(void);
void ex2b(void);
void ex2c(void);



int factR (int N);
void ex3a(void);

int factN (int N);
void ex3b(void);



float power_N( float x, int N);
float power_R( float x, unsigned int N);

void ex4a(void);
void ex4b(void);

void print_array(int tableau[], int N);
void ex5(void);

int pgcd(int a,int b);
void ex6(void);

int main()
{
    printf("Hello world!\n");

//    ex2a();
//    ex2b();
//    ex2c();

//    ex3a();
//    ex3b();

//ex4a();
//ex4b();

ex5();


    return 0;
}

 // EXERCICE 2
int somme_if(int N)
{
    if(N<=0) return 0;
    return N+ somme_if(N-1);
}


int somme_for(int N)
{
    int somme = 0;
    for (int i=0;i<=N;i++)
    {
        somme += i;
    }
    return somme;
}

int somme_while(int N)
{
    int somme =0 ;
    while(N>=0)
    {
        somme = somme +N;
        N--;
    }
    return somme;
}

void ex2a(void)
{
    int s = somme_if(5);
    printf("%d\n",s);


}

void ex2b(void)
{
    int s = somme_for(5);
    printf("%d\n",s);
}

void ex2c(void)
{
    int s = somme_while(5);
    printf("%d\n",s);
}

 // EXERCICE 3

 int factR (int N)
 {
    if(N==0) return 1;
    if(N<=0)
    {
        printf("ERREUR");
        return 0;
    }

     return N * factR(N-1);
 }

 void ex3a(void)
 {
    int res =factR(5);
    printf("%d\n",res);
 }

 int factN (int N)
 {
     int res =1 ;
     if(N==0) return 1;
     if(N<0)
     {
         printf("ERREUR");
         return 0;
     }
     for (int i=1;i<=N;i++)
     {
         res= res*i;
     }
     return res ;
 }

  void ex3b(void)
 {
    int res =factN(5);
    printf("%d\n",res);
 }

 // EXERCICE 4


float power_N( float x, int N)
{

    if(N==0) return 1;
    if(N<0)
    {
        printf("ERREUR N<0");
        return 0;
    }
    float res=1;

    for (int i=1;i<=N;i++){
       res *=x;
    }
    return res;
}

float power_R( float x, unsigned int N)
{
    if(N==0) return 1;
//    if(N<0)   // On en a pas besoin ici car on a unsigned int donc N ne peut pas etre négatif
//    {
//        printf("ERREUR N<0");
//        return 0;
//    }

    return x *power_R(x,N-1);
}


void ex4a(void)
{
    float res =power_N(2,3);
    printf("%.2f\n",res);

}
void ex4b(void)
{
    float res =power_R(2,3);
    printf("%.2f\n",res);
}


// EXERCICE 5


void print_array(int tableau[], int N)
{
    if (N<0)
    {
        printf("ERREUR N<0");
    }

    for (int i=0;i<N;i++)
    {
        printf("%d ",tableau[i]);
    }

}


void ex5(void)
{
    int N=100;
    int tab[N];
    for (int i=0;i<N;i++)
    {
        tab[i]=i;
    }

    print_array(tab,N);
}



int pgcd(int a,int b)
{

}

void ex6(void)
{

}







