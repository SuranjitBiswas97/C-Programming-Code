#include<stdio.h>
struct str{
    int reg;
    char name[100];
    double marks;
};
main ()
{
       /* bubble sort: n sokkok input diram abar n sokok output ay.*/
    int n;
    str student[100];
    while (scanf("%d", &n)==1)
    {
        for (int i=0; i<n; i++)
        {
            scanf("%d", &student[i].reg);
            scanf("%s", &student[i].name);
            scanf("%lf", &student[i].marks);
        }

        for (int i=0; i<n; i++)
        {
            printf("%d %s %lf\n",student[i].reg, student[i].name, student[i].marks);
        }
        printf("\n");
    }
}
