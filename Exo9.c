#include <stdio.h>

void boucle(int *pa, int *res, int var)
    {
        while (*pa<=var){
            printf("%d : %d\n",*pa, *res * *(res+1));
            *res=*res * *(res+1);
            *pa=*pa+1;
            boucle(pa, res, var);
        }
    }

int factoriel(int var){
    int a;
    int res;
    a=1;
    res=1;

    boucle(&a,&res,var);
    return res;
}


int main(int argc, char *argv[])
{
    int res;
    int arg;

    arg=atoi(argv[1]);
    res=factoriel(arg);
    printf("resultat pour N=%d éléments : %d\n",arg, res);
}
