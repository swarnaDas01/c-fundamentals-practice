#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    
    if(ch>= 'a' && ch<= 'z')
    {
        if(ch=='z')
        {
            printf("a");
        }
        else
        {
            char nxt = ch + 1;
            printf("%c", nxt);

        }
    }
    return 0;
}