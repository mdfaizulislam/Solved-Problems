#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count;

void mod( long int m )
{
    int add=0;
    while( m > 0 )
    {
        add+=m%10;
        m/=10;
    }
    if( !(add%9) )
        count++;
    if( add > 9 )
        mod(add);
}

int main()
{
    long int n,l,i,sum;
    char ca[1002];
    while( scanf("%s",ca) )
    {
        n=atoi(ca);
        if( !n )
            return 0;
        l=strlen(ca);
        for( i = 0,sum=0 ; i < l ; i++ )
            sum+=ca[i]-48;
        if( (sum%9) )
            printf("%s is not a multiple of 9.\n",ca);
        else
        {
            count=1;
            if( sum > 9 )
                mod(sum);
            printf("%s is a multiple of 9 and has 9-degree %d.\n",ca,count);
            count=0;
        }
    }
    return 0;
}
