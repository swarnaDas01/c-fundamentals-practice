#include <stdio.h>

int main()
{
 
    int n;
    scanf("%d", &n);
    int num=1;
    int space=n-1;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for(int k=1; k<=num; k++)
        {
            //printf("%d", k);
            printf("%d ", k);
        }
        printf("\n");
        num++;
        space--;
    }
    return 0;
}