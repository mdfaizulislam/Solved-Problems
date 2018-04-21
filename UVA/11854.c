#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned long long a,b,c;
    while( 1 )
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if( a == 0 && b == 0 && c == 0 )
            break;
        if( a*a + b*b == c*c )
            printf("right\n");
        else if( b*b + c*c == a*a )
            printf("right\n");
        else if( c*c + a*a == b*b )
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}
