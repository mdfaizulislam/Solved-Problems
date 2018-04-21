#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, l;
    char ca[32];
    while( scanf("%s", ca) != EOF )
    {
        l=strlen(ca);
        for( i = 0 ; i < l ; i++ )
        {
            if( ca[i] >= 'A' && ca[i] <= 'C' )
                printf("2");
            else if( ca[i] >= 'D' && ca[i] <= 'F' )
                printf("3");
            else if( ca[i] >= 'G' && ca[i] <= 'I' )
                printf("4");
            else if( ca[i] >= 'J' && ca[i] <= 'L' )
                printf("5");
            else if( ca[i] >= 'M' && ca[i] <= 'O' )
                printf("6");
            else if( ca[i] >= 'P' && ca[i]<= 'S' )
                printf("7");
            else if( ca[i] >= 'T' && ca[i] <= 'V' )
                printf("8");
            else if( ca[i] >= 'W' && ca[i] <= 'Z' )
                printf("9");
            else
                printf("%c",ca[i]);
        }
        printf("\n");
    }
    return 0;
}
