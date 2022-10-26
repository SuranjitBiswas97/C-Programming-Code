#include<stdio.h>
int main()
{
    int i,n,a,j;
    printf("Enter The Number:-\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        if(i%2==0 )
        {
            printf("%d\n",i);

        }
    printf("\n");

    for(j=1; j<=n; j++)

        if (j%3==0)
        {
            printf("%d\n",j);
        }



}
