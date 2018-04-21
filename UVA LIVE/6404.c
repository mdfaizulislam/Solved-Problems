#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i, check, k ,l , n;
    char a[8];
    scanf("%d\n",&t);
    while( t-- )
    {
        gets(a);
        check=1;
        if( ( (a[0]+1 == a[1]) && (a[1]+1 == a[2]) ) || ( (a[0]-1 == a[1]) && (a[1]-1 == a[2] )) )
            check=0;
        else if( (a[1]+1 == a[2] && a[2]+1 == a[3]) || ( a[1]-1 == a[2] && a[2]-1 == a[3] ) )
            check=0;
        else if( (a[2]+1 == a[3] && a[3]+1 == a[4]) || ( a[2]-1 == a[3] && a[3]-1 == a[4] ) )
           check=0;
        else if( (a[3]+1 == a[4] && a[4]+1 == a[5]) || ( a[3]-1 == a[4] && a[4]-1 == a[5] ) )
            check=0;
        else
        {
            for( i = 0 ; i < 6 ; i++ )
            {
                l=1;
                for( n = 0 ; n < 6 && l <= 3 ; n++ )
                {
                    if( i == n )
                        continue;
                    if( a[i] == a[n] )
                        l++;
                }
                if( l == 3 || ( l > 3 && l < 7 ))
                {
                    check=0;
                    break;
                }
            }
        }
        if( check )
            printf("ACCEPTABLE\n");
        else
            printf("WEAK\n");
    }
    return 0;
}
