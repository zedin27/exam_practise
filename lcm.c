#include <stdio.h>

unsigned int gcd(unsigned int a, unsigned int b)
{

   if (a == b)
        return a;
 
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
       return (0);
   else
    return (a*b)/gcd(a, b);
}
int main ()
{
    int a = 0, b = 56;
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}