#include<stdio.h>
int main()
{
    int i,n,a[200];
    while(scanf("%d",&n)==1)
    {

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
            {
                int x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            printf("%d\n",a[i]);
        }
        printf("\n");
    }
}
