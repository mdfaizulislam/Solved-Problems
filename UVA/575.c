#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    char a[50];
    long i,p,n,sum;
    while( scanf("%s",a) )
    {
        if( atoi(a) == 0 )
            break;
        p=strlen(a);
        for( i = 0,sum=0 ; i < p ; i++ )
        {
            n=(int)a[p-i-1]-48;
            sum+=n*( pow(2,i+1)-1 );
        }
        printf("%ld\n",sum);
    }
    return 0;
}
