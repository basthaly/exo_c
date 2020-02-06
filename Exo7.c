#include <stdio.h>
#include "toolbox.h"

int main(int argc, char *argv[]){
    unsigned char message [100];
    unsigned char a;
    unsigned char b;
    int test;
    
    message[0]= 'a' ;
    message[1]= 'b' ;
    message[2]= 'c' ;
    message[3]= 'd' ;
    message[4]= 'e' ;
    message[5]= '\0' ;

    printf("%s\n",message);
    chiffrement(message,1);
    printf("%s\n",message);
    dechiffrement(message);
    printf("%s\n",message);

}