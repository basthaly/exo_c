#include <stdio.h>

int factoriel(int var){
    int a;
    int res;
    res=1;
    for ( a=0; a <var; a++ ){
        res=res+res*a;
    }
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
