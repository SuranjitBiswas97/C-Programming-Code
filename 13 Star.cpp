#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a==1)
    {
        printf(" * \n");
    }
    else if(a==2)
    {
        printf(" * \n");
        printf("* *\n");
        printf(" * \n");
    }


    if(a==3)
    {
        printf("  *  \n");
        printf(" * * \n");
        printf("* * *\n");
        printf(" * * \n");
        printf("  *  \n");
    }
    else if(a==4)
    {
        printf("   *   \n");
        printf("  * *  \n");
        printf(" * * * \n");
        printf("* * * *\n");
        printf(" * * *  \n");
        printf("  * * \n");
        printf("   *   \n");
    }
    else if(a==5)
    {
        printf("    *    \n");
        printf("   * *   \n");
        printf("  * * *  \n");
        printf(" * * * * \n");
        printf("* * * * *\n");
        printf(" * * * * \n");
        printf("  * * *  \n");
        printf("   * *   \n");
        printf("    *    \n");

    }
    else
    {
        printf("Nothing");
    }

}
