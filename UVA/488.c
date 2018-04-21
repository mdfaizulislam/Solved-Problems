#include<stdio.h>
int main()
{
    int i,j,x,k,l,a,f;
    scanf("%d",&x);
        for( i = 1 ; i <= x ; i++ )
        {
            scanf("\n%d %d", &a, &f);
            for( j = 1 ; j <= f ; j++ )
            {
                for( k = 1 ; k <= a ; k++ )
                {
                    for( l = 1 ; l <= k ; l++)
                    printf("%d",k);
                    printf("\n");
                }
                for( k = a-1 ; k >= 1 ; k-- )
                {
                    for( l = k ; l >= 1 ; l-- )
                        printf("%d",k);
                    printf("\n");
                }
                if ( j < f )
                printf("\n");
            }
            if( i < x )
            printf("\n");
        }

    return 0;
}
