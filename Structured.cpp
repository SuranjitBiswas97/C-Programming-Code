#include<stdio.h>
struct str
{
    int reg;
    char name[100];
    double marks;
};
int main()
{
    int  n;
    str arr[100];
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i].reg);
            scanf("%s",&arr[i].name);
            scanf("%lf",&arr[i].marks);
        }
        for(int i=0; i<n; i++)
        {
            printf("%d %s %.2lf\n",arr[i].reg,arr[i].name,arr[i].marks);
        }
    }
    return 0;
}
