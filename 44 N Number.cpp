#include<stdio.h>
int main()
{
    int i,n,a[100];
    while(scanf("%d",&n)==1)
    {
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            printf("%d\n",a[i]);
        }
        printf("\n");
        return 0;
    }
}
