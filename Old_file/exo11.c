#include <stdio.h>
#include "stdlib.h"
#include "time.h"

void bubble(int var_tab, int* tab){
    int i;
    int j;
    int temp;

    for ( i=var_tab; i>0; i-- ){
        for ( j=0; j<i-1; j++ ) {
            if ( tab[j] > tab [j+1] ) {
                temp = tab [j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }

    return ;
}

int main(int argc, char *argv[])
{
    int var_tab;
    int i;
    int* tab;
    srand(time(NULL));

    printf("Quel taille de tableau voulez vous ? \n");
    scanf("%d", &var_tab);
    tab= (int*) malloc(var_tab*sizeof(int));
    for (i=0; i<var_tab; i++){
        tab[i]=rand()%6588;
    }
    for (i=0; i<var_tab; i++){
        printf("| %d |",tab[i]);
    }
    printf("\n");

    bubble(var_tab, tab);

    for (i=0; i<var_tab; i++){
        printf("| %d |",tab[i]);
    }
    printf("\n");

    free(tab);

    return 0;
}