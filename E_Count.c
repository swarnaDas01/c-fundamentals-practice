#include <stdio.h>
#include<string.h>
int main()
{
 
    char s[100001];
    scanf("%s",s);
    int length = strlen(s);
    int sum=0;
    for(int i=0; i<length; i++)
    {
      sum += s[i]-48;
    }

    printf("%d", sum);
    return 0;
}