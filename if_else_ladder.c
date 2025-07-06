#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("ami burger khabo\n");
    }
    else if(tk >= 50)
    {
        printf("fuchka khabo");
    }
    else if(tk >= 20)
    {
        printf("chips khabo");
    }
    else
    {
        printf("kichui khabo na\n");
    }
}