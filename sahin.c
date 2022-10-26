#include<stdio.h>
main ()
{
       /* bubble sort: n sokkok input diram abar n sokok output ay.*/
    int n, i, arr[100];
    while (scanf("%d", &n)==1)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
