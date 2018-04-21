#include<stdio.h>
int main()
{
int bd,bm,by,cd,cm,cy,i,n,day,year,month;
    scanf("%d",&n);
    for( i = 1 ; i <= n ; i++ )
    {
        scanf("\n%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);
        if( bd <= cd )
            day=cd-bd;
        else
        {
            bm++;
            day=cd+30-bd;
        }
        if( bm <= cm )
        {
            month=cm-bm;
            year=cy-by;
        }
        else
        {
            by++;
            month=cm+12-bm;
            year=cy-by;
        }
        if( year > 130 )
            printf("Case #%d: Check birth date\n",i);
        else if( year >= 0 )
             printf("Case #%d: %d\n",i,year);
        else
            printf("Case #%d: Invalid birth date\n",i);
    }

    return 0;
}

