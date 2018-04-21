#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&t);
    while( t-- )
    {
        scanf("%d",&n);
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        i=2;
        while( i-- )
        {
            n/=10;
            if( i = 1 )
            {
               if( n%10 > 0 )
                    printf("%d\n",n%10);
                else
                    printf("%d\n",n%10-(n%10)*2);

               break;
            }
        }
    }
    return 0;
}


