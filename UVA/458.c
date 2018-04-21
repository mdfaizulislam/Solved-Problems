#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int main()
{
    char a[1000];
    int p,i;
    //freopen("test.txt","r",stdin);
    while( scanf("%s",a) != EOF )
    {
        p=strlen(a);
        for( i = 0 ; i < p ; i++ )
            printf("%c",(int)a[i]-7);
        printf("\n");
    }
    return 0;
}
