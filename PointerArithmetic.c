#include <stdio.h>
int main()
{
    int a = 34;
    int *ptra = &a;
    char b = 'c';
    char *ptrb = &b;
    printf("%d\n", ptra);
    printf("%d\n", ptra + 1); //size of int will be added ,i.e.,(1*4)
    printf("%d\n", ptrb);
    printf("%d\n", ptrb + 2); //size of char will be added ,i.e.,(2*1)
    ptra++;
    printf("%d\n", ptra);
    ptrb++;
    printf("%d\n", ptrb);
    return 0;
}