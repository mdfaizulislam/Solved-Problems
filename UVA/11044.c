#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, m, t;
    scanf("%ld",&t);
    while( t-- )
    {
        scanf("%ld %ld",&n, &m);
        printf("%ld\n",(n/3)*(m/3) );
    }
    return 0;
}
