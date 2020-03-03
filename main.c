#include <stdio.h>
#include <stdlib.h>
#include "chaine.h"

int main(int argc, char const *argv[])
{
	int i;
	char* test;

	chaine_s tableau;
	tableau.taille=5;
	tableau.tab= malloc(tableau.taille*sizeof(int));
	test="abcde";
	for (i=0; i<tableau.taille; i++){
		tableau.tab[i]=test[i];
		printf("Test : %c\n",tableau.tab[i]);
	}
	
	free(tableau.tab);
	return 0;
}
