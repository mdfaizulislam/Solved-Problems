#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, i,j, a[11];
    scanf("%d",&t);
    while( t-- )
    {
        for( i = 0 ; i <= 9 ; i++ )
            a[i]=0;
        scanf("%d",&n);
     for( i = 1 ; i <= n ; i++ )
        {
            j=i;
            while( j != 0 )
            {
                a[j%10]++;
                j/=10;
            }
        }
        for( i = 0 ; i < 9 ; i++ )
                printf("%d ",a[i]);
        printf("%d\n",a[9]);
    }

    return 0;
}

/*

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, i,j, a[11];
    scanf("%d",&t);
    while( t-- )
    {
        for( i = 0 ; i <= 9 ; i++ )
            a[i]=0;
        scanf("%d",&n);
        for( i = 1 ; i <= n ; i++ )
        {
            j=i;
            while( j != 0 )
            {
                a[j%10]++;
                j/=10;
            }
        }
        for( i = 0 ; i < 9 ; i++ )
                printf("%d ",a[i]);
        printf("%d\n",a[9]);
    }

    return 0;
}
*/

