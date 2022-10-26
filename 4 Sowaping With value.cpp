#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    c=a;
    a=b;
    b=c;

    printf("%d\n%d\n%d\n",a,b,c);
    return 0;


}
