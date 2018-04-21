#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a[100],n,i=0,j,sum;
    while( 1 )
    {
        scanf("%ld",&a[i]);
        if( a[i] == 0 )
            break;
        i++;
    }
    printf("PERFECTION OUTPUT\n");
    i=0;
    while( 1 )
    {
        if( a[i] == 0 )
        {
            printf("END OF OUTPUT\n");
            break;
        }
        n=a[i];
        j=1;
        sum=0;
        while( j != n )
        {
            if( n%j == 0 )
                sum+=j;
            j++;
        }
        if( sum == n )
            printf("%5ld  PERFECT\n",n);
        else if( sum > n )
            printf("%5ld  ABUNDANT\n",n);
        else if( sum < n)
            printf("%5ld  DEFICIENT\n",n);
        i++;
    }
    return 0;
}
