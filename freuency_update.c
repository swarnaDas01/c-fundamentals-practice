#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[6];
    for(int i=0;i<n;i++)
    {
        if(a[i] ==0)
        {
            fre[0]++;
        }
        else if(a[i] ==1)
        {
            fre[1]++;
        }
        else if(a[i] ==2)
        {
            fre[2]++;
        }
        else if(a[i] ==3)
        {
            fre[3]++;
        }
        else if(a[i] ==4)
        {
            fre[4]++;
        }
        else if(a[i] ==5)
        {
            fre[5]++;
        }

    }

    printf("%d -> %d",0,fre[0]);
    printf("%d -> %d",1,fre[1]);
    printf("%d -> %d",2,fre[2]);
    printf("%d -> %d",3,fre[3]);
    printf("%d -> %d",4,fre[4]);
    printf("%d -> %d",4,fre[5]);
    
    return 0;
}