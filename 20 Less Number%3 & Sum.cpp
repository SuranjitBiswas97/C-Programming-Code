#include<stdio.h>
int main()
{
    int i,n,sum;
    sum=0;
    printf("Enter The Number\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    if(i%3==0)

    {
        printf("%d\n",i);
        sum=sum+i;
    }
    {
        printf("%d",sum);
    }





}
