#include <stdio.h>
#include <string.h>
#include "stdlib.h"


void ex1 (void) {
    char a [11];
    for (int i=0;i<10;i++){
        a[i]='1'+i;
        a[10]='\0';
    }
//        printf("%s\n",a);

//    printf("%s",a);


}

void ex2(void)
{
    char a[7];
    char *b;
    char *c = "Hi";
    char d[] = "Hi";

    /* Construire "Hi" dans a avec ASCII */
    a[0] = 72;   // 'H'
    a[1] = 105;  // 'i'
    a[2] = 0;    // '\0'

    b = a;       // b pointe vers la chaîne a

//    printf("%s\n", a);
//    printf("%s\n", b);

    a[0]=104;
//    printf("%s\n", a);
    b[0]=104;
//    printf("%s\n", b);
    c[0]=104;
    printf("%s\n", c);
    d[0]=104;
    printf("%s\n", d);
}

int my_strlen(const char * c ){

    int taille = 0;
    for (int i=0;c[i]!='\0';i++){
        taille++;
        }
    printf("la taille d'apres my_strlen est  : %d\n",taille);

    return taille;
}

void ex3(void){
char* a= "Hello, world!";
my_strlen(a);
printf("la taille d'apres strlen est : %d\n",strlen(a));

}




char * my_squeeze_string(const char *c){
    int taille = my_strlen(c);
    char* squeezed_string;
    squeezed_string = malloc((taille+1) * sizeof(char));
//    char squeezed_string[taille+1];
    int index = 0;

    for (int i=0;i<taille;i++)
    {
        if(c[i]!=' ')
        {
            squeezed_string[index]=c[i];
            index++;
        }
    }
    squeezed_string[index]='\0';

    return squeezed_string;
}

void ex4(void){
    char* c = "one two three";
    char* squeezed;

    squeezed = my_squeeze_string(c);
    printf("%s",squeezed);
    free(squeezed);
    squeezed=NULL;
}

void test (void)
{
    char string[100];

    int ret;
    printf("Choisissez une valeur : ");
    ret = scanf("%s",string);
    printf("valeur retour scanf : %d\n", ret);
    printf("chaine lue : %s\n", string);
}

void ex6(void)
{
    FILE* f = fopen("fichier1.txt","w");

    fprintf(f,"%s","You did it!");

    fclose(f);
}


void ex7(void)
{
    FILE *f;
    int c;

    f = fopen("main.c", "r");

    if (f == NULL)
    {
        printf("Erreur ouverture fichier\n");
        return;
    }

    while ((c = fgetc(f)) != EOF)
    {
        putchar(c);
    }

    fclose(f);
}
