#include <stdio.h>
#include <stdlib.h>
#include "function.h"
int main()
{
    printf("Hello world!\n");
    ex1();
    return 0;
}
void ex1(void)
{
    int N=5;
    for (int i=0;i<N;i++)
    {
        printf("%d \n",compteur());
    }
}
