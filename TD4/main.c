#include <stdio.h>
#include <stdlib.h>
void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();

void fill_tab (float *t,int N);
float min (float *p,int N);
float* create_tab(int taille, float valeur);
int * create_double(const int* tab, int N);
float* concat(float* tab1,int n1, float* tap2, int n2);



int main()
{
//    printf("Hello world!\n");
//    ex1();
//    ex2();
//    ex3();
//    ex4();
//    ex5();
//    ex6();

char nom[21]="";
printf("Quels est votre nom ?");
fgets(nom,21,stdin);







    return 0;
}
//  EXERCICE 1
void ex1(){

    int * p = malloc(sizeof(int));
    *p = 4;
    printf("%d\n",*p);
    printf("%d\n",*p); // it doesn't works because p is the address of the pointer
    free(p);
}

//  EXERCICE 2
void ex2(){
    int *p1, *p2;
    p1 = malloc(100*sizeof(int));
    for(int i=0;i<100;i++){
        p1[i]= i;
        printf("%d, ",p1[i]);
    }
    p2 =p1 ;
    for(int i=0;i<100;i++){
        p2[i] = 2*p2[i];
        printf("%d, ",p2[i]);
    }
    free(p1);
    p1=NULL;
    p2=NULL;
}

//  EXERCICE 3
float min(float *p, int N){
    float m = p[0];
    for(int i = 1; i < N; i++){
        if(p[i] < m){
            m = p[i];
        }
    }
    return m;
}
void fill_tab (float *t,int N){
    for(int i=0;i<N;i++){
        t[i]= (i*0.01- 0.5)* (i*0.01- 0.5) + 7;
    }
}
void ex3 (){
    int N = 100;
    float m;

    //text static
    float tabs[100];
    fill_tab(tabs,N);
    m = min(tabs, N);
    printf("\n %f est la plus petite valeur du tableau \n",m);
    // dynamic mode

    float *tabs2;
    tabs2=malloc(N*sizeof(float));
    fill_tab(tabs2,N);
    printf("\n %.2f est la plus petite valeur du tableau",min(tabs2,N));
    free(tabs2);
    tabs2= NULL;
}

//  EXERCICE 4
float* create_tab(int taille, float valeur) {
        if(taille <=0) {
            return NULL;
            }
        float *tab;
        tab = malloc(taille*sizeof(float));
//        float tab [taille];
        if (tab == NULL){
            return NULL;
        }
        for(int i=0;i<taille;i++){
            tab[i]= valeur;
            printf("\n %.2f",tab[i]);
        }
    return tab;
}
void ex4(){
    float * tab1 = create_tab(15,3);
    float * tab2 = create_tab(15,-5);
    free(tab1);
    free(tab2);
    tab1=NULL;
    tab2 =NULL;
}

// EXERCICE 5
int * create_double(const int* tab, int N){
    if (N<=0){
        return NULL;
    }
    int* tab_copie = malloc(N*sizeof(int));
    if(tab_copie == NULL){
        return NULL ;
    }
    for(int i=0;i<N;i++){
        tab_copie[i]=tab[i];
//        printf("\n %d ",tab[i]);
    }
    return tab_copie;
}
void ex5(){

    int tab1[5] = {1,0,2,0,8}; // N = 5;
    int * tab2 = create_double(tab1,5);
    if(tab2!=NULL){
        free(tab2);
        tab2=NULL;
    }
}

// EXERCICE 6
float* concat(float* tab1,int n1, float* tab2, int n2){
    int n = n1+n2;
    if (n1<0 || n2<0){
        return NULL;
    }
    float* concated_tab = malloc(n*sizeof(float));
    if (concated_tab == NULL){
        return NULL;
    }
    for(int i=0;i<n;i++)
    {
        if (i<n1){
            concated_tab[i] = tab1[i];
        }
        else{
            concated_tab[i] = tab2[i-n1];
        }
    printf("\n%.2f",concated_tab[i]);

    }
    return concated_tab ;
}
void ex6(){



























    float tab1[5] = { 0.3, 0.7, 1.2, 0.0, 2.7};
    float tab2[3] = { 0.1, 0.2, 0.3};
    float* tab12 = concat(tab1, 5, tab2, 3);
    free(tab12);
    tab12=NULL;
}
