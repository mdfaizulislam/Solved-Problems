#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, k, la, lb;
    char ca[1002], cb[1002], st[1002], ch;
    while( gets(ca) )
    {
        gets(cb);
        k=0;
        la=strlen(ca);
        lb=strlen(cb);
        for( i = 0 ; i < la ; i++ )
        {
            for( j = 0 ; j < lb; j++ )
            {
                if( cb[j] == ca[i] )
                {
                    st[k]=ca[i];
                    k++;
                    cb[j]='0';
                    break;
                }
            }
        }
        st[k]='\0';
        k--;
        for( i = 0 ; i < k ; i++ )
        {
            for( j = 0 ; j < k-i; j++ )
            {
                if( st[j] > st[j+1] )
                {
                    ch=st[j];
                    st[j]=st[j+1];
                    st[j+1]=ch;
                }
            }
        }
        for( i = 0 ; i <= k ; i++ )
            printf("%c", st[i]);
        printf("\n");
    }
    return 0;
}
