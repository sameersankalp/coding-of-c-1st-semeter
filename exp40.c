#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }

     }
      if(sum==i)
        printf("%d is the total no. of perfect numbers:",i);
      return 0;

}
