#include<stdio.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&x);
    for( i = 1 ; i <= x ; i++)
    {
        scanf("%d",&n);
        int a[n],k=0,l=0;
        for( j = 1 ; j <= n ; j++ )
            scanf("%d",&a[j]);
        for( j = 1 ; j <= n-1 ; j++ )
        {
            if( a[j] < a[j+1] )
                k++;
            else if( a[j] > a[j+1] )
                l++;
            else;
        }
        printf("Case %d: %d %d\n",i,k,l);
    }
    return 0;
}
