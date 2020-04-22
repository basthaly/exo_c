#include <stdio.h>
#include "stdlib.h"
#include "time.h"

void Partionnement(int* tab, int var_tab){
    
    int i=0;
    int j=var_tab-1;
    int max=var_tab-1;
    int booleen = 1;
    int temp;

    while ( i != j ) {
        printf("i : %d | j : %d\n",i,j);
        if (booleen){
            if ( tab[i]>tab[max] )
                booleen=0;
            else
                i++;
        }
        else {
            if (tab[j]<tab[max]) {
            booleen=1;
            temp=tab[j];
            tab[j]=tab[i];
            tab[i]=temp;
            }
            else
                j--;
        }
    }
    for (i=max; i>j; i-- ){
        temp=tab[i];
        tab[i]=tab[i-1];
        tab[i-1]=temp;
    }

}

void QuickSort(int var_tab, int* tab){

    Partionnement(tab,var_tab);

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

    QuickSort(var_tab,tab);

    for (i=0; i<var_tab; i++){
        printf("| %d |",tab[i]);
    }
    printf("\n");

    free(tab);

    return 0;

}