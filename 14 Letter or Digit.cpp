#include<stdio.h>
int main()
{
    char ch1,ch2,ch3;
    scanf("%c %c %c",&ch1,&ch2,&ch3);
    if (ch1>='0' && ch1<='9')

        printf("DIGIT\n");

    else if(ch1>='a' && ch1<='z')

        printf("SMALL LETTER\n");

    else if(ch1>='A' && ch1<='Z')

        printf("CAPITAL LETTER\n");

    if (ch2>='0' && ch2<='9')

        printf("DIGIT\n");

    else if(ch2>='a' && ch2<='z')

        printf("SMALL LETTER\n");

    else if(ch2>='A' && ch2<='Z')

        printf("CAPITAL LETTER\n");

    if (ch3>='0' && ch3<='9')

        printf("DIGIT\n");

    else if(ch3>='a' && ch3<='z')

        printf("SMALL LETTER\n");

    else if(ch3>='A' && ch3<='Z')

        printf("CAPITAL LETTER\n");





}
