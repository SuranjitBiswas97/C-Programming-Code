#include<stdio.h>
int main()
{
    int a,b,i;
    int sum=0;
    while(scanf("%d %d",&a,&b)==2)
    {
        for(i=a; i<=b; i++)
        {


            if(i%2==1)
            {
                printf("%d\n",i);
                sum=sum+i;
            }

        }
        printf(" The Odd Sum Is:%d\n",sum);

    }








}
