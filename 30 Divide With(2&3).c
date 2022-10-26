#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    printf("Enter The Nunber:-\n");
    for(i=1; i<n; i++)
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    printf("\n");
    for (j=1; j<n; j++)
        if(j%3==0)
        {
            printf("%d\n",j);
        }





}
