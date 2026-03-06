#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

void ex1(void);
void ex2();
void ex3();
void ex4();

// EXERICICE 1
typedef struct
{
    int Q;
    int R;
}Resdiv;

// EXERICICE 2

typedef enum
{
    paire,
    impair
}Parite;

void affiche(Parite p, int N);

// EXERICICE 3

typedef struct
{
    int x;
    int y;
} Point;

int parabolic(Point tab[], int N);



#endif // FUNCTION_H_INCLUDED
