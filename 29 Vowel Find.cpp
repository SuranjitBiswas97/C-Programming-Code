#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    gets(str);
    int l=strlen(str);
    for(i=0; i<l; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            printf("%c",str[i]);
        }
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            printf("%c",(str[i]-=32));
        }


    }



}
