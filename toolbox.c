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

void min_maj(char * var){
    int res;
    int i;

    res=compt(var);
    for (i=0; i<res; i++){
        if (var[i] >= 97 && var[i] <= 122)
            var[i]=var[i]-32;
    }
}

void mirror(char * var){
    int res;
    int i;
    int a;

    res=compt(var);
    char tab[res];
    a=0;

    for (i=res-1; i>=0; i--){
        tab[a]=var[i];
        a++;
    }

    for (i=0; i<res; i++){
        var[i]=tab[i];
    }
}