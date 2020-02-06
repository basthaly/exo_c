#include <stdio.h>

void test(int *pa, int *res)
{
    while (*pa<=5){
        printf("%d * %d = %d\n",*res, *res+1, *res * *(res+1));
        *res=*res * *(res+1);
        *pa=*pa+1;
        test(pa, res);
    }
}


int main(void)
{
    int a;
    int res;
    a=1;
    res=1;
    test(&a,&res);
    printf("res = %d\n", res);
}
