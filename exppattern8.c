#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
