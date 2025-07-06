#include<stdio.h>
int main()
{
    int c = 10;
    int d = 5;
    // int e = 15;
    // int f = 2;
    float e = 15;
    int f = 2;
    int g = 15;
    int h = 6;
    int sum = c + d;
    printf("Summation: %d\n", sum);
    int sub = c - d;
    printf("Subtraction: %d\n", sub);
    int mul = c * d;
    printf("Multiplication: %d\n", mul);
    int div = c / d;
    printf("Division: %d\n", div);
    //e er mn 15 & f er mn 2. 15 / 2 = 7.5 holeo ekhne sudhu 7 dekhbe. kron e, f 2 ti mn e int. 7.5 pete hole ontoto ekti mn flot e rkhte hobe
    float divi = e / f;
    printf("Division: %f\n", divi);
    int rem = g % h;
    printf("Modulus %d", rem);

     

}