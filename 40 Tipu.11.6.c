#include<stdio.h>
#include<string.h>
int main()
{

    char str[100];
    int ch;
    gets(str);
    for(ch=0; ch<strlen(str); ch++)

    {
        if(str[ch]=='A'||str[ch]=='E'||str[ch]=='I'||str[ch]=='O'||str[ch]=='U')
        {
            printf("%c\n",str[ch]);
        }
        else if  (str[ch]=='a'||str[ch]=='e'||str[ch]=='i'||str[ch]=='o'||str[ch]=='u')

        {
            printf("%c\n ",(str[ch]-32));
        }


    }
}



