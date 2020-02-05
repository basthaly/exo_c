#include <stdio.h>
#include "toolbox.h"

int main(int argc, char *argv[]){
    unsigned char message [100];
    unsigned char a;
    unsigned char b;
    int test;
    
    message[0]= 'k' ;
    message[1]= 'a' ;
    message[2]= 'y' ;
    message[3]= 'a' ;
    message[4]= 'k' ;
    message[5]= '\0' ;

    printf("%s\n",message);
    chiffrement(message,1);
    printf("%s\n",message);
    chiffrement(message,-1);
    printf("%s\n",message);

}