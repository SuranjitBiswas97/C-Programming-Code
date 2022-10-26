#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    int m,i,l;
    scanf("%d", &m);
    while(gets(n))
    {


        for(i=0; i<strlen(n) ; i++)
        {
            if(n[i]>='A' && n[i]<='W')

                printf("%c",n[i]+3);

            else if(n[i]==' ')

                printf("%c",n[i]);

            else if(n[i]>='X' && n[i]<='Z')

                printf("%c",n[i]-23);

        }
        printf("\n");
    }
}
