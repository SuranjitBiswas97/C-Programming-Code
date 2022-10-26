
#include <stdio.h>
int main()
{
    int i,j,k,a;
    printf("please enter is value:    \n ");
    scanf("%d",&a);
    for(i=0; i<=a; i++)
    {
        for(j=0; j<=a-i; j++)
        {
            printf(" ");
        }

        for(k=0; k<=2*i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

