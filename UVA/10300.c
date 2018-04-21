#include <stdio.h>
#include <stdlib.h>

int main()
{
    long tc,frm,s,num,i,siz,exp;
    while( scanf("%ld",&tc) != EOF )
    {
        while( tc-- )
        {
            s=0;
            scanf("%ld",&frm);
            for( i = 0 ; i < frm ; i++ )
            {
                scanf("%ld %ld %ld",&siz,&num,&exp);
                s+=siz*exp;
            }
            printf("%ld\n",s);
        }

    }
    return 0;
}
