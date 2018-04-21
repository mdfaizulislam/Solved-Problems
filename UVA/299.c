#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[51],n,sp,c,i,j,p;
    scanf("%d",&n);
    while( n-- )
    {
        c=0;
        scanf("%d",&p);
        for( i = 1 ; i <= p ; i++ )
            scanf("%d",&a[i]);
        for( i = 1 ; i <= p ; i++ )
            for( j = 1 ; j <= p-i ; j++ )
        {
             if( a[j] > a[j+1])
             {
                 sp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=sp;
                 c++;
             }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
    return 0;
}
