#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n,avg,count,m,o;
    scanf("%d",&c);
    while( c-- )
    {
        scanf("%d",&n);
        m=n;
        o=n;
        int a[n+1],sum=0;
        while( n-- )
        {
            scanf("%d",&a[n]);
            sum+=a[n];
        }
        avg=sum/m;
        count=0;
        while( m-- )
        {
            if( a[m] > avg )
                count++;
        }
        printf("%.3f%c\n",(float)100*count/o,37);
    }
    return 0;
}
