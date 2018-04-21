#include<stdio.h>
int main()
{
    long t,i,r,n,a,j,b=0;
    scanf("%ld",&t);
    for( i = 1 ; i <= t ; i++ )
    {
        scanf("%ld",&n);
        j=0;
        while( n != b )
        {
            a=n;
            r=0;
            while( n != 0 )
            {
                r=r*10+n%10;
                n/=10;
            }
            b=r;
            if( a==b)
                break;
            else if( a != b )
                n=a+b;
                j++;
        }
        printf("%ld %ld\n",j,a);

    }
    return 0;
}

