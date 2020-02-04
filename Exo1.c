
int main(){
    int res;

    unsigned char message [100];
    message[0]= 'H' ;
    message[1]= 'E' ;
    message[2]= 'L' ;
    message[3]= 'L' ;
    message[4]= '0' ;
    message[5]= '0' ;
    message[6]= '\0' ;

    res=compt(message);
    printf("Il y a %d caractère\n",res);
}

