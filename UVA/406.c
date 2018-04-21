#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, i, c, sq, prime[1000], j, ans[1000];
    while( scanf("%d %d",&n,&c) == 2 )
    {
        for( i = 1 ; i <= n ; i++ )
            prime[i]=1;
        sq=sqrt(n);
        for( i = 2 ; i <= sq ; i++ )
        {
            if( prime[i] )
                for( j = i*2 ; j <= n ; j+=i )
                    prime[j]=0;
        }
        for( i = 1, j=1 ; i <= n ; i++ )
            if( prime[i] )
            {
                ans[j]=i;
                j++;
            }

        j--;
        printf("%d %d:", n,c);
        if( 2*c >= j )
        {
            for( i = 1 ; i <= j ; i++ )
                printf(" %d",ans[i]);
        }
        else if( j%2 && j > c )
        {
           for( i = j/2 + 2 -c ; i <= j/2 + c ; i++ )
            printf(" %d",ans[i]);
        }
        else
        {
            for( i = (j/2)-c+1 ; i <= (j/2)+c ; i++ )
                printf(" %d",ans[i]);
        }
        printf("\n\n");

    }
    return 0;
}
