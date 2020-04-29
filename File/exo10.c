#include <stdio.h>

int factorielle(unsigned int val)
{
    if (val == 0)
        return 1;
    else
        return val * factorielle(val - 1);
}

int main(int argc, char *argv[])
{
    unsigned int res;
    int arg;

    arg=atoi(argv[1]);
    res=factorielle(arg);
    printf("resultat pour N=%d éléments : %d\n",arg, res);
}
