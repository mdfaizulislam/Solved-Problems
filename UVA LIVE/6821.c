#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, p, q, r, s, t, check;
    while( scanf("%d %d %d %d %d %d %d %d %d %d",&a, &b, &c, &d, &e, &p, &q, &r, &s, &t) != EOF )
    {
        check=0;
        if( a == !p || !a == p )
        if( b == !q || !b == q )
            if( c == !r || !c == r )
                if( d == !s || !d == s )
                    if( e == !t || !e == t )
                        check=1;
                    else
                        check=0;
                else
                    check=0;
            else
                check=0;
        else
            check=0;
    else
        check=0;

    if( check )
        printf("Y\n");
    else
        printf("N\n");
    }
    return 0;
}
