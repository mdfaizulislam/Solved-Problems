#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,l=1;
    char a;
    while( scanf("%c",&a) != EOF )
    {
        if( a == '"' && l%2 == 1 )
        {
            printf("``");
            l++;
        }
        else if( a == '"' && l%2 == 0 )
        {
            printf("''");
            l=0;
            l++;
        }
        else
            printf("%c",a);
            i++;
    }
    return 0;
}
