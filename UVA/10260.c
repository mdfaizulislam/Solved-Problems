#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, l, n, check;
    char a[22];
    while( gets(a) )
    {
        check=0;
        n=0;
        l=strlen(a);
        for( i = 0 ; i < l ; i++ )
        {
            if( a[i] == 'B' || a[i] == 'F' || a[i] == 'P' || a[i] == 'V')
                n=1;
            else if( a[i] == 'C' || a[i] == 'G' || a[i] == 'J' || a[i] == 'K' || a[i] == 'Q' || a[i] == 'S' || a[i] == 'X' || a[i] == 'Z' )
                n=2;
            else if( a[i] == 'D' || a[i] == 'T')
                n=3;
            else if( a[i] == 'L' )
                n=4;
            else if( a[i] == 'M' || a[i] == 'N' )
                n=5;
            else if( a[i] == 'R' )
                n=6;
            else
            {
                n=0;
                check=0;
            }
            if( n != 0 && n != check )
            {
                printf("%d",n);
                check=n;
            }
        }
        printf("\n");
    }
    return 0;
}
