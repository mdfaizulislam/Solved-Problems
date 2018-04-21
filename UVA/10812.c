#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int t,a,b,s,d;
    while( scanf("%ld",&t) == 1 )
    {

        while( t-- )
        {
            scanf("%ld %ld",&s,&d);
            if( d > s || (s-d)%2 != 0 )
                printf("impossible\n");
            else
            {
                a=(s-d)/2;
                b=a+d;
                printf("%ld %ld\n",b,a);
            }
        }
        printf("%ld",-19%2);
    }
    return 0;
}
