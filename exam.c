#include<stdio.h>

int main()
{
    char str[100];
    int vow=0, cons=0, other=0, i;
    gets(str);
    for(i=0;i<strlen(str);i++)
        {

            if(str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
            {
                vow++;
            }

            else if (str[i]>='A'&& str[i]<='Z')
            {
                cons++;
            }
            else
                other++;
    }
    printf("Vowel %d\nConsunent %d\nOthers %d", vow, cons, other);
}
