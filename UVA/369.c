#include <stdio.h>
#include <stdlib.h>

long double fact( long double m )
{
    long double f=1;
    if( m == 0 )
        return 1;
    while( m > 0 )
    {
        f*=m;
        m--;
    }
    return f;
}

int main()
{
    int n, r;
    long double ans;
    while( scanf("%d %d",&n,&r) )
    {
        if( n == 0 && r == 0 )
            break;
        ans= ( fact(n) )/( fact(n-r) * fact(r) );
        printf("%d things taken %d at a time is %.0Lf exactly.\n",n,r,ans);
    }
    return 0;
}

/*
       this code is not accepted, think again

int main()
{
    unsigned long long int n, r, j, i, min, k, c;
    while( scanf("%llu %llu",&n,&r) )
    {
        if( n == 0 && r == 0 )
            break;
       if( n == r )
         c=1;
       else
       {
           k=n-r;
           if( r >= k )
           {
               min=k;
           }
           else
           {
               min=r;
           }
           if( min == 0 )
            min=1;
           c=1;
           k=1;

           for( i = n ; min > 0; i--, min-- )
           {
               c*=i;
               k*=min;
               if( c%k == 0 )
               {
                   c/=k;
                    k=1;
               }

           }
       }
            printf("%llu things taken %llu at a time is %llu exactly.\n",n,r,c);
        }
    return 0;
}
*/
