#include<stdio.h>
int main()
{
    int i,n,sum;
    sum=0;
    scanf("%d",&n);
    printf("Enter The Number\n");
    for(i=0; i<n; i++)
    if(i>=0 && i<n)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
        {
            printf("%d",sum);
        }

    return 0;
}
