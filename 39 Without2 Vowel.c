#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i;
    gets(ch);
    printf("HELLO %s\n",ch);
    printf("The Strlen Is:%d",strlen(ch));

        printf("\n");

    {
        for(i=0; i<=strlen(ch); i++)
        {
            if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
            {
                printf(" " );
            }
            else
            {
                printf("%c",ch[i]);
            }
        }
    }


}
