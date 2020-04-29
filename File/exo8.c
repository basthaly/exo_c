#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){
    int res;
    int nbr_tete;

    nbr_tete=atoi(argv[1]);

    printf("\n");
    system("clear");
    while (nbr_tete%2!=0){
        printf("L'hydre à un nombre de tête pair quand il attaque hercule\nRentrer un nombre de tête pair\n");
        exit(0); 
    }
    
    res=0;
    while (nbr_tete!=0){
        res++;
        nbr_tete=nbr_tete/2;
        if (nbr_tete==1){
            res++;
            nbr_tete=0;
        }
        else if (nbr_tete%2!=0){
            printf("Il reste %d têtes, Hercule coupe %d têtes. Il en reste %d. %d têtes repoussent\n",nbr_tete*2,nbr_tete,nbr_tete,nbr_tete*3+1-nbr_tete);
            nbr_tete=nbr_tete*3+1;
        }
        else {
            printf("Il reste %d têtes, Hercule coupe %d têtes. Il en reste %d. Rien ne repoussent\n",nbr_tete*2,nbr_tete,nbr_tete);
        }
    }

    printf("Hercule coupe la dernière tête et gagne le combat en %d coups d'épées.\n",res);
}