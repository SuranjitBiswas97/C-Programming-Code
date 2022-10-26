#include<stdio.h>
int main()
{
    int a,b,value;
    scanf("%d %d",&a,&b);
    value=(a+b);
    {
        printf("%d\n",value);
    }
    value=(a-b);
    {
        printf("%d\n",value);
    }

    value=(a*b);
    {
        printf("%d\n",value);
    }
    float valueT=(a*1.0/b);

    {
        printf("%f\n",valueT);
    }
    value=(a%b);
    {
        printf("%d\n",value);
    }

}
