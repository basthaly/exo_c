#include "toolbox.h"

int main(){
    unsigned char message [100];
    char a;
    char b;

    message[0]= 'H' ;
    message[1]= 'E' ;
    message[2]= 'L' ;
    message[3]= 'L' ;
    message[4]= '0' ;
    message[5]= ' ' ;
    message[6]= 'W' ;
    message[7]= 'O' ;
    message[8]= 'R' ;
    message[9]= 'L' ;
    message[10]= 'D' ;
    message[11]= ' ' ;
    message[12]= ':' ;
    message[13]= ')' ;
    message[14]= '\0' ;

    a=' ';
    b='_';
    repl(message, a, b);
    printf("%s\n",message);
}