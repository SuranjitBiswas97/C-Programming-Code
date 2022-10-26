#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if (year%400==0 && year%100==0)
        printf("leapyear");
    else if(year%100!=0 && year%4==0)
        printf("leapyear");
    else
        printf("not leapyear");

}
