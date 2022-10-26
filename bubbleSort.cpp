#include<stdio.h>
main ()
{
    /* bubble sort: sob number k sajaiya raka jay aita diya.*/
    int n, i, arr[100];
    while (scanf("%d", &n)==1)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i=0;i<n;i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (arr[i]>arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr [j];
                    arr[j]=temp;
                }
            }
        }
        for (i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}
