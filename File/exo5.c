#include <stdio.h>
#include "toolbox.h"

int main(int argc, char *argv[]){
    unsigned char message [100];
    unsigned char a;
    unsigned char b;
    int res;
    int i;

    while (argv[1][res]!='\0'){
        res++;
    }

    for (i=0; i<res; i++){
        message[i]=argv[1][i];
    }

    printf("%s\n",message);
    mirror(message);
    printf("%s\n",message);
}