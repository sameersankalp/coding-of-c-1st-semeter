
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d",a);
    printf("\n%u",&a);
    printf("\n%u",&p);
    printf("\n%u",p);
    printf("\n%d",*p);
    printf("\n%u",*(&p));

}
