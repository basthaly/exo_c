#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main(int argc, char *argv[])
{
    int var_tab;
    int i;
    srand(time(NULL));

    printf("Quel taille de tableau voulez vous ? \n");
    scanf("%d", &var_tab);
    int tab[var_tab];
    for (i=0; i<var_tab; i++){
        tab[i]=rand()%6588;
    }
    for (i=0; i<var_tab; i++){
        printf("| %d |",tab[i]);
    }
    printf("\n");
}
