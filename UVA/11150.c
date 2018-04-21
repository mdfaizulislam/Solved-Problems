#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c=0,n;
    while( scanf("%d",&n) == 1 )
    {
        c+=n;
        while( n >= 1)
        {
            if( n == 1 )
            break;
            if( n%3 == 0 )
            {
                c+=n/3;
                n=n/3;
            }
            else
            {
                if( n > 2 )
                {
                    c+=n/3;
                    n=n/3+n%3;
                }
                else
                {
                    c++;
                    n=n/3;
                }
            }
        }
        printf("%d\n",c);
        c=0;
    }
    return 0;
}
