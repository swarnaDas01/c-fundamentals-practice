#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000)
    {
        printf("Cox's Bazar Jabo\n");
        if(tk >= 10000){
            printf("Saint martin jabo");
        }
        else
        {
            printf("Saint Martin jabo na");
        }
    }
    else
    {
        printf("kothao jabo na\n");
    }
}