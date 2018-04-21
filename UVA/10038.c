#include <stdio.h>
#include <stdlib.h>

int abs( int a )
{
    return a > 0 ? a : -a;
}
int main()
{
    int i=0,k=0, n, a[3002], b[3002], swap=0, j;
    while( scanf("%d",&n) != EOF )
    {
        scanf("%d",&swap);
        for( i = 0 ; i < n-1 ; i++ )
        {
            scanf("%d",&a[i]);
            b[i]=abs( a[i] -swap );
            swap=a[i];
        }

         for( i = 0 ; i < n -2 ; i++ )
         {
             for( j = 0 ; j < n-i-2 ; j++ )
             {
                 if( b[j] > b[j+1] )
                 {
                     swap=b[j];
                     b[j]=b[j+1];
                     b[j+1]=swap;
                 }
             }
         }
        for( i = 0 ; i < n-1 ; i++ )
        {
            if( b[i] != i+1 )
            {
                k=1;
                break;
            }
        }
        if( k == 1 )
            printf("Not jolly\n");
        else
            printf("Jolly\n");
        k=0;
    }

    return 0;
}
