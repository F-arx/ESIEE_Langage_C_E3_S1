#include "stdio.h"
#include "function.h"

Resdiv euclidien(int x, int y)
{
    Resdiv Res;
    if(y==0)
    {
        printf("ERREUR : y=0 \n ");
        Res.Q = -1;
        Res.R = -1;
        return Res;
    }
    Res.Q = x/y;
    Res.R = x%y;
    return Res;
}

void ex1(void)
{
    int a,b;
    a=55;
    b=0;
    Resdiv Res = euclidien(a,b);
    printf("Q = %d et R = %d", Res.Q, Res.R);

}


