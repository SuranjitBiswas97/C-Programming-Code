#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=k;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",(i+1));
        }
        printf("\n");
        k--;
    }
    return 0;
}





