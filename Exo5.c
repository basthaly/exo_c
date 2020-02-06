#include <stdio.h>
#include "toolbox.h"

int main(int argc, char *argv[]){
    unsigned char message [100];
    unsigned char a;
    unsigned char b;
    int res;
    int i;

    printf("%s\n",argv[1]);
    res=0;
    while (argv[1][res]!='\0'){
        res++;
    }

    printf("res : %d\n",res);
    for (i=0; i<res; i++){
        message[i]=argv[1][i];
    }

    printf("oui : %s\n",message);
    mirror(message);
    printf("oui : %s\n",message);
}