#include<stdio.h>
int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);  // according to euclid algorithm
}
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    int g=gcd(a,b);
    printf("gcd of given number is %d",g);
}
