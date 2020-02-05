#include "toolbox.h"

int main(int argc, char *argv[]){
    unsigned char message [100];
    unsigned char a;
    unsigned char b;
    
    message[0]= 'h' ;
    message[1]= 'e' ;
    message[2]= 'l' ;
    message[3]= 'l' ;
    message[4]= 'o' ;
    message[5]= ' ' ;
    message[6]= 'w' ;
    message[7]= 'o' ;
    message[8]= 'r' ;
    message[9]= 'l' ;
    message[10]= 'd' ;
    message[11]= ' ' ;
    message[12]= ':' ;
    message[13]= ')' ;
    message[14]= '\0' ;

    printf("%s\n",message);
    mirror(message);
    printf("%s\n",message);
}