#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first = n/1000;
    if(first%2 == 0)
    {
        printf("EVEN");
    } 
    else
    {
        printf("ODD");
    }
    return 0;
}