#include <stdio.h>
#include <stdlib.h>

long int mod( long int a )
{
    long int count=1, n= 1;
    while( 1 )
    {
        if( a > 1 )
        {
            n=n*10+1;
            count++;
        }
        if( n%a )
            n=n%a;
        else
            break;
    }
    return count;
}
int main()
{
    long int n, ans;
    while( scanf("%ld",&n) != EOF )
    {
        printf("%ld\n",mod(n));
    }
    return 0;
}
