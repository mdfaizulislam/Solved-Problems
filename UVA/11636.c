#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,l=1,k=0,i;
    while( scanf("%ld",&n) == 1 && n>0)
    {
        for( i = 2 ; i <= n ; i*=2 )
            k++;
        if( n-i/2 > 0)
            k++;
        printf("Case %ld: %d\n",l++,k);
        k=0;
    }
    return 0;
}
