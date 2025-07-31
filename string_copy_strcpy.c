#include <stdio.h>
#include <string.h>
int main()
{
 
    char c[101], d[101];
    scanf("%s %s", &c, &d);

    strcpy(c,d);

    printf("%s %s",c, d);
    return 0;
}