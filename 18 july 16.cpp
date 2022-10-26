#include<stdio.h>
#include<string.h>
bool vowel(char ch)
{
    if (ch=='A' || ch=='E' ||ch=='I' ||ch=='O' || ch=='U'|| ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            return true;
            return false;
}
bool consnent(char ch)
{
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            return true;
            return false;

}
int main()
{

    char str[100];
    int  vow, cons, other, i;
    while (gets(str))
    {
        vow=0;
        cons=0;
        other=0;
        for (i=0;i<strlen(str);i++)
        {
            if (vowel(str[i]))
            {
                vow++;
            }
            else if (consnent(str[i]))
            {
                cons++;
            }
            else other++;
        }
        printf("Nuber of Vowels- %d\nNumber of Consonents- %d\nNumber of Others- %d", vow, cons, other);
    }
}
