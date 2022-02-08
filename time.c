#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm *ptr;
    time_t lt;
    lt = time(NULL);
    ptr = gmtime(&lt);
    printf("%s", asctime(ptr));
    return 0;
}