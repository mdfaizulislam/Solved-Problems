#include <stdio.h>
#include <stdlib.h>


int main()
{
    long int n,i,j,c,d,m,swap,min,b1,b2;
    while( scanf("%ld",&n) != EOF )
    {
        long int a[n+1],min=0;
        for( i = 0 ; i < n ; i++ )
        {
            scanf("%ld",&a[i]);
        }
        scanf("%ld",&m);
        min=1000001;
          for (c = 0 ; c < ( n - 1 ); c++)
          {
            for (d = 0 ; d < n - c - 1; d++)
            {
              if (a[d] > a[d+1]) /* For decreasing order use < */
              {
                swap       = a[d];
                a[d]   = a[d+1];
                a[d+1] = swap;
              }
            }
          }
          for( i = 0 ; i < n ; i++ )
          {
              for( j = i+1 ; j< n ; j++ )
              {
                  if( a[i]+a[j] == m && ( a[j]-a[i] <min ) )
                  {
                      b1=a[i];
                        b2=a[j];
                  }
              }
          }
          printf("Peter should buy books whose prices are %ld and %ld.\n\n",b1,b2);
    }
    return 0;
}
