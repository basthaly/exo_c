#include <stdio.h>
#include "stdlib.h"
#include "time.h"

void Quicksort(int* tab, int fin, int deb){
    
    int asc=deb;
    int desc=fin;
    int max=fin;
    int booleen = 1; // if boolean = 1 asc monte sinon desc descend
    int temp;

    if (fin-deb < 1){
        return ;
    }

    while ( asc != desc ) {
        // printf("asc : %d | desc : %d\n",asc,desc);
        if (booleen){
            if ( tab[asc]>tab[max] )
                booleen=0;
            else
                asc++;
        }
        else {
            if (tab[desc]<tab[max]) {
            booleen=1;
            temp=tab[desc];
            tab[desc]=tab[asc];
            tab[asc]=temp;
            }
            else
                desc--;
        }
    }
    for (asc=max; asc>desc; asc-- ){
        temp=tab[asc];
        tab[asc]=tab[asc-1];
        tab[asc-1]=temp;
    }

    Quicksort(tab, desc-1, deb);
    Quicksort(tab, fin, desc+1);
}

int main(int argc, char *argv[]) {

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

    Quicksort(tab, var_tab-1, 0);

    for (i=0; i<var_tab; i++){
        printf("| %d |",tab[i]);
    }
    printf("\n");

    free(tab);

    return 0;

}