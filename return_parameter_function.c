#include <stdio.h>

int sum(int a, int b)
{
    int ans = a+b;
    return ans;
}


int main()
{
 
    // int val = sum(10,30);
    // printf("%d", val);

    int x,y;
    scanf("%d %d", &x, &y);
    int ans = sum(x,y);
    printf("%d", ans);
    return 0;
}