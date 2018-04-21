#include<stdio.h>
#include<math.h>
int main()
{

    while( 1 )
    {
        long long a,b,k=0,i,j;
        scanf("%lld %lld",&a,&b);
        if( a == 0 && b == 0 )
            break;
        for( i = a ; i <= b ; i++ )
        {
            j=sqrt(i);
            if( j*j == i )
            {
                k++;
                i=j*j;
            }
        }
         printf("%lld\n",k);
    }
    return 0;
}
