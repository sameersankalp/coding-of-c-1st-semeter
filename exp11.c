#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
  //  printf("Enter the number of row:");
  //  scanf("%d",&n);
    for(i=4;i>=1;i--)
    {
        for(j=4;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }
    return 0;
}
