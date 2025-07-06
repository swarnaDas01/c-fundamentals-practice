//Simple clcultor


#include <stdio.h>

int main()
{
 
    long long int X, Y;
    scanf("%lld %lld", &X, &Y);

    long long int sum, mul, diffrence;
    sum = X + Y;
    mul = X * Y;
    diffrence = X - Y;

    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, mul);
    printf("%lld - %lld = %lld\n", X, Y, diffrence);
    return 0;
}