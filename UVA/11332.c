#include <stdio.h>
#include <stdlib.h>

int mod( unsigned long int m)
{
    int sum=0;
    while( m > 0 )
    {
        sum+=m%10;
        m/=10;
    }
    if( sum > 9 )
        mod(sum);
    else
        return sum;
}
int main()
{
    unsigned long int n;
    int ans;
    while( scanf("%uld",&n) )
    {
        if( n == 0 )
            return 0;
        else
        {
            ans=mod(n);
            printf("%d\n",ans);
        }
    }
    return 0;
}
