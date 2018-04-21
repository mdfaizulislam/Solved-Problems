#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, k, i, sum;
    scanf("%d",&t);
    while( t-- )
    {
        scanf("%d",&k);
        for( i = 1, sum=1 ; i <= k ; i++ )
        {
            sum*=2;
        }
        printf("%d\n",sum-1);
    }
    return 0;
}
