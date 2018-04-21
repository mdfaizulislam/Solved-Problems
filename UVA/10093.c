#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, j=0, a, max, sum, l;
    char c[10000];
    while( scanf("%s",c) != EOF )
    {
        l=strlen(c);
        for( i = 0, max=0, sum=0 ; i < l ; i++ )
        {
            if( isalpha(c[i]) || isdigit(c[i]) )
            {
                if( isdigit(c[i]) )
                    a=c[i]-48;
                else if( islower(c[i]) )
                    a=c[i]-61;
                else
                    a=c[i]-55;
                if( max < a )
                    max=a;
                sum+=a;
                j++;
            }
        }
        if( max == 0 )
            max=1;
        for( a=1, i = max+1 ; i <= 62  ; i++ )
        {
            if( sum%(i-1) == 0 )
            {
                printf("%d\n",i);
                a=0;
                break;
            }

        }
        if( a )
            printf("such number is impossible!\n");
    }
    return 0;
}

