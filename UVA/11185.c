#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n, k, a[20],i;
    while( scanf("%ld",&n) )
    {
        if( n < 0 )
            return 0;

        if( n == 0 )
            printf("0\n");
        else
        {
            k=0;
            while( n > 0 )
            {
                a[k]=n%3;
                n/=3;
                k++;
            }
            for( i = k-1 ; i >= 0 ; i-- )
            printf("%ld",a[i]);
            printf("\n");
        }

    }
    return 0;
}
