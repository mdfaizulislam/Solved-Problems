#include<stdio.h>
#include<string.h>
int main()
{
    int T,l;
    scanf("%d",&T);
    char A[1000];
    while( T-- )
    {
        scanf("%s",A);
        l=strlen(A)/2;
        if( A[l-1] == A[l] )
            printf("Do-it\n");
        else
            printf("Do-it-Not\n");
    }
    return 0;
}
