#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, n, sum=0, avg, set=0, move=0, h[103];
    while(scanf("%d",&n) == 1 )
    {
        if( n == 0 )
            break;
        set++;
        sum=0;
        move=0;
        for( i = 0 ; i < n ; i++ )
        {
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        avg=sum/n;
        for( j = 0 ; j < n ; j++ )
            if( avg < h[j] )
                move+=h[j]-avg;
                printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,move);
    }
    return 0;
}

