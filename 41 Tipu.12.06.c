#include<stdio.h>
int main()
{
    int a,b,sum,i;

    scanf("%d%d",&a,&b);
    sum=0;
    for(i=a; i<=b; i++)
    if(i%2==1)
    {
        printf("%d\n", i);
        sum=sum+i;
    }
    printf("%d",sum);
}

