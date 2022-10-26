#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int i;
    printf("Enter Your Name:\n");
    gets(ch);

    printf("Hello %s\n", ch);


    printf("%d\n", strlen(ch));


    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
        {

            continue;
        }

        else
            printf("%c", ch[i]);
    }
}
