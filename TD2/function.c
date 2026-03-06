#include "stdio.h"
#include "function.h"

// EXERICICE 1

Resdiv euclidien(int x, int y)
{
    Resdiv res;
    if(y==0)
    {
        printf("ERREUR : y=0 \n ");
        res.Q = -1;
        res.R = -1;
        return res;
    }
    res.Q = x/y;
    res.R = x%y;
    return res;
}

void ex1(void)
{
    int a,b;
    a=55;
    b=0;
    Resdiv res = euclidien(a,b);
    printf("Q = %d et R = %d", res.Q, res.R);

}

// EXERICICE 2
void affiche(Parite p, int N)
{
    if (p == paire)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ", 2 * i);
        }
    }
    else if (p == impair)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ", 2 * i + 1);
        }
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

//ou encore :
//
//void affiche(parite p, int N)
//{
//    int count = 0;
//    int i = 0;
//
//    if (p == paire)
//    {
//        while (count < N)
//        {
//            if (i % 2 == 0)
//            {
//                printf("%d ", i);
//                count++;
//            }
//            i++;
//        }
//    }
//    else if (p == impair)
//    {
//        while (count < N)
//        {
//            if (i % 2 != 0)
//            {
//                printf("%d ", i);
//                count++;
//            }
//            i++;
//        }
//    }
//    else
//    {
//        for (i = 1; i <= N; i++)
//        {
//            printf("%d ", i);
//        }
//    }
//
//    printf("\n");
//}


// EXERICICE 3

int parabolic(Point tab[], int N)
{
    if(N<0)
    {
        printf("ERREUR : N<0");
    }

    for (int i =0;i<N;i++)
    {
        tab[i].x = i;
        tab[i].y = tab[i].x *tab[i].x;
    }
    for (int i =0;i<N;i++)
    {
    printf("(%d,%d) \n",tab[i].x,tab[i].y);
    }
    return 0;
}

void ex3(void)
{
    int N = 8;
    Point tab2[N];
    parabolic(tab2,N);
}

























