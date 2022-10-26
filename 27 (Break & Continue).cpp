#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {
        if(i==7)
        break;
        printf("%d\n",i);
    }

   {
            printf("\n");
   }
    for(i=1;i<=n;i++)
    {
       if(i==6)
            continue;
        printf("%d\n",i);
    }



    return 0;
}

