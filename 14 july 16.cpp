#include<stdio.h>
int sum(int a, int b);
int factorial (int n);
void print(int sum, int fact);
int main ()
{
        int m, n;
        while (scanf("%d%d", &m, &n)==2)
        {
           int sumation = sum(m,n);
           int fact = factorial(m);
           print(sumation,fact);
        }
}
int sum(int a, int b)
{
    int sumation;
    sumation = a+b;
    return sumation;
}


int factorial (int n)
{
    int fact = 1;
    for (int i =1; i<=n; i++)
    {
        fact*=i;

    }
    return fact;
}

void print(int sum, int fact)
{
     printf ("sum of n- %d\n", sum);
     printf ("Factorial of m- %d\n", fact);
}
