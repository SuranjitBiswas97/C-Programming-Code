#include<stdio.h>
int main()
{
    int i,n,sum;
    i=0;
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
        printf("HELLO WORLD %d\n",i);
        sum=sum+i;
    }
    printf("%d\n",sum);
}
