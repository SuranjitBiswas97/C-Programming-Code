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
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32;
        }
        else if(str[i]>='a'&& str[i]<='z')
        {
            str[i]-=32;
        }
    }
    puts(str);
}







