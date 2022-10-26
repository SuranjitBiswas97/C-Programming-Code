#include<stdio.h>
main ()
{
       /* bubble sort: n sokkok input diram abar n sokok output ay.*/
    int n, reg[100];
    char name[100][100];
    double marks[100];

    while (scanf("%d", &n)==1)
    {
        for (int i=0; i<n; i++)
        {
            scanf("%d", &reg[i]);
            scanf("%s", &name[i]);
            scanf("%lf", &marks[i]);
        }

        for (int i=0; i<n; i++)
        {
            printf("%d %s %lf\n",reg[i], name[i], marks[i]);
        }
        printf("\n");
    }
}
