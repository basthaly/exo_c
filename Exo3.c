#include "toolbox.h"

int main(int argc, char *argv[]){
    unsigned char message [100];
    unsigned char a;
    unsigned char b;

    printf("1er argument: %s\n", argv[1]);
    printf("2ème argument: %s\n", argv[2]);

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

    a=argv[1][0];
    b=argv[2][0];
    repl(message, a, b);
    printf("%s\n",message);

}