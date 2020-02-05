#include <stdio.h>

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

int palindrome(char * var){
    int a;
    int i;
    int test;
    int res;

    a=0;
    test=1;
    res=compt(var);
    printf("%d\n",res);
    for (i=res-1; i>=res/2; i--){
        if (var[a] != var[i])
            test=0;
        a++;
    }
    return test;
}

void chiffrement(char * var, int nbr){
    
    int i;
    int res;
    int erreur;

    erreur=0;
    res=compt(var);
    printf("%d\n",res);
    for (i=0; i<res; i++){
        if (var[i]<'a' || var[i]>'z'){
            erreur=1;
        }
    }
    if (erreur==0){
        for (i=0; i<res; i++){
            var[i]=var[i]+nbr;
            if (var[i]>'z')
                var[i]='a'+var[i]-'z';
            else if (var[i]<'a')
                var[i]='z'-var[i]-'a';
        }
    }
}