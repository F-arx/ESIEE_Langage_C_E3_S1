#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED


//  EXERCICE 1

void transform_tableau(int* tab, int N,int (*f)(int x));
int carre(int x);
int cube(int x);
void ex1(int x);


//  EXERCICE 2

int compare(int a, int b);
int maxtab(int * tab, int N, int (*f)(int a, int b));
void ex2(void);


//  EXERCICE 3

int cmpr( const void * a, const void * b);
void ex3(void);


#endif // FUNCTION_H_INCLUDED
