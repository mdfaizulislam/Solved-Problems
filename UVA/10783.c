#include<stdio.h>
int main()
{
    int i,j,a,b,c,s,n;
    while( scanf("%d",&n) != EOF )
    {
        for( i = 1 ; i <= n ; i++ )
        {
            scanf("%d\n%d",&a,&b);
            s=0;
            if( a > b )
            {
                c=a;
                a=b;
                b=c;
            }
            for( j = a ; j <= b ; j++ )
                if( j%2 != 0 )
                    s+=j;
            printf("Case %d: %d\n",i,s);
        }
    }
    return 0;
}
