#include <stdio.h>

int main()
{
 
    int n;
    scanf("%d", &n);
    if(n>=10 && n<=99)
    {
        int tens = n/10;
        int units = n%10;

        if(tens==0 || units==0)
        {
            printf("NO");
        }

        else if(tens%units==0 || units%tens==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        
    }
    
    else
    {
        printf("NO");
    }

    
    return 0;
}