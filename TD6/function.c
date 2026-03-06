#include <stdio.h>
#include <stdlib.h>
#include "stdlib.h"

void transform_tableau(int* tab, int N,int (*f)(int x)){



    if (tab == NULL || f ==NULL || N<=0  ) return ;

    for (int i=0 ; i<N;i++)
    {
        tab[i]=f(tab[i]);
    }
}

int cube(int x)
{
    return x*x*x ;
}

int carre(int x)
{
    return x*x;
}

void ex1(int N)
{
    int tab1[N];
    int tab2[N];

    for (int i=0;i<N;i++)
    {
        tab1[i]=i+1;
        tab2[i]=i+1;
    }

    transform_tableau(tab1,N,cube);
    transform_tableau(tab2,N,carre);

    for (int i = 0; i < N-1; i++)
    {
//        printf("%d %d \n", tab1[i],tab2[i]);
    }

}


int compare(int a, int b)
{
    if (a>b) return 1 ;
    if (a<b) return -1 ;
    return 0 ;

}


int maxtab(int *tab, int N, int (*f)(int a, int b))
{
    if (tab == NULL || f == NULL || N <= 0) return -1;

    int imax = 0;           // indice du max courant
    int max  = tab[0];      // valeur du max courant (optionnel, mais ok)

    for (int i = 1; i < N; i++)
    {
        if (f(max, tab[i]) == -1)   // max < tab[i]
        {
            max = tab[i];
            imax = i;
        }
    }

    return imax;
}



void ex2(void)
{
    int tab[]={1,50,2,4,3,8,20,23,5,7};
    int imax;
    int N = 10;
    imax = maxtab(tab,N,compare);
    printf("imax=%d val=%d\n", imax, tab[imax]);

}




//        switch (compare(max,tab[i+1]))
//        {
//            case 1 :
//                max = tab[i];
//                break;
//            case -1 :
//                max = tab[i+1];
//                break;
//            case 0 :
//                max = max;
//                break;
//        }




int cmpr(const void *a, const void *b)
{
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x > y) return 1;
    if (x < y) return -1;
    return 0;
}




void ex3(void)
{
    int tab[] = {1,50,2,4,3,8,20,23,5,7};
    int N = sizeof(tab) / sizeof(tab[0]);

    qsort(tab, N, sizeof(int), cmpr);

    // test (autorisé)
    for (int i = 0; i < N; i++)
        printf("%d ", tab[i]);
    printf("\n");
}












