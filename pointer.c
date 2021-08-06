#include <stdio.h>
int main()
{
    printf("Lets learn about pointers\n");
    int a = 76;
    int *ptra = &a;
    int *ptr2;
    int *ptr3 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of pointer to a is %x\n", &ptra);
    printf("The address of a is %p\n", ptra);
    printf("The address of a is %p\n", &a);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The address of Null pointer is %p\n", ptr3);
    return 0;
}