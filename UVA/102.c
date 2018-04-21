#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b1, b2, b3, g1, g2, g3, c1, c2, c3, BCG, BGC, CBG, CGB, GCB, GBC, a[8], ans, min, i;
    while( scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2, &g2, &c2, &b3, &g3, &c3) != EOF )
    {
        a[1]=BCG=b2+b3+c1+c3+g1+g2;
        a[2]=BGC=b2+b3+g1+g3+c1+c2;
        a[3]=CBG=c2+c3+b1+b3+g1+g2;
        a[4]=CGB=c2+c3+g1+g3+b1+b2;
        a[5]=GBC=g2+g3+b1+b3+c1+c2;
        a[6]=GCB=g2+g3+c1+c3+b1+b2;
        min=a[1];
        ans=1;
        for( i = 2 ; i < 7 ; i++ )
        {
            if( a[i] < min )
            {
                min=a[i];
                ans=i;
            }
        }
        if( ans == 1 )
            printf("BCG %d\n",min);
        else if( ans == 2 )
            printf("BGC %d\n",min);
        else if( ans == 3 )
            printf("CBG %d\n",min);
        else if( ans == 4 )
            printf("CGB %d\n",min);
        else if( ans == 5 )
            printf("GBC %d\n",min);
        else
            printf("GCB %d\n",min);
    }
    return 0;
}
