#include <stdio.h>
#include <stdbool.h>
int main()
{
 
     char a[101], b[101];
     scanf("%s %s", &a, &b);
     int i=0;
     while (1)
     {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Eual");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("a is smaller");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("b is smaller");
            break;
        }
        else if(a[i]<b[i])
        {
            printf("a is smller");
            break;
        }
        else if(a[i]>b[i])
        {
            printf("b is smaller");
            break;
        }
        else if(a[i]==b[i])
        {
            i++;
        }
     }
     
    return 0;
}