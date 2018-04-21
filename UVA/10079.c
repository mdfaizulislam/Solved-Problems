#include <stdio.h>
#include <stdlib.h>

int main()
{
    long double n,A;
    while( 1 )
    {
        scanf("%Lf",&n);
        if( n < 0 || n > 210000000)
           break;
            A=(n*n+n+2)/2;
           printf("%.0Lf\n",A);
    }
    return 0;
}
