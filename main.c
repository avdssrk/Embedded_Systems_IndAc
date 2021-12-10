#include <stdio.h>
#include <stdlib.h>
int GCD1(int a, int b)
{
    if(b==0)
        return a;
    if(a==0)
        return b;
    if(a>b)
        return GCD1(a-b,b);
    return GCD1(a,b-a);
}

int GCD2(int a, int b)
{
    if(b==0)
        return a;
    return GCD2(b,a%b);
}

int LCM1(int a, int b)
{
    int lcm;
    lcm=(a>b)?a:b;

    while(1){
        if(lcm%a==0 && lcm%b==0)
            return lcm;
        lcm++;
    }
}

int LCM2(int a,int b)
{
    return a*b/GCD1(a,b);
}

int main()
{
    int a = 98, b = 56;
    printf("GCD1 of %d and %d is %d \n", a, b, GCD1(a, b));
    printf("GCD2 of %d and %d is %d \n", a, b, GCD2(a, b));
    printf("GCD of %d and %d using LCM is %d \n", a, b, a*b/LCM1(a,b));
    printf("LCM of %d and %d is %d \n",a,b,LCM1(a,b));
    printf("LCM of %d and %d using GCD is %d",a,b,LCM2(a,b));
    return 0;
}

