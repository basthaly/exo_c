int compt (char * var){
    int i;
    i=0;
    while (var[i]!='\0')
        i++;
    return i;
}

void repl(char * var, unsigned char a, unsigned char b){
    int res;
    int i;

    res=compt(var);
    for (i=0; i<res; i++) {
        if (var[i]==a)
            var[i]=b;
    }
}