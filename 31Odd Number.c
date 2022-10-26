#include<stdio.h>
int main()
{
    int a,b,i;

    while(scanf("%d %d",&a,&b)==2)
    {
        int sum=0;
        for(i=a; i<=b; i++)
        {


            if(i%2==1)
            {
                printf("odd %d\n",i);
                sum=sum+i;
            }

        }
        printf(" The Odd Sum Is:%d\n",sum);

    }
    //sssreturn 0;
}
