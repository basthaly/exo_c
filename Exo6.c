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
    test=palindrome(message);
    if ( test == 1 )
        printf("Le message est un palindrome\n");
    else
        printf("Le message n'est pas un palindrome\n");
    
}