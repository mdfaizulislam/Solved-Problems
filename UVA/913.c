#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, last;
    while( scanf("%ld",&n) != EOF )
    {
        last=(n*(n+2))/2;
        printf("%ld\n",(3*last)-6);
    }
    return 0;
}
