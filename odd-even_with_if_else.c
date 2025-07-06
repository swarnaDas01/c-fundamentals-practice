#include<stdio.h>
int main(){
    int e;
    int num;
    scanf("%d", &e);
    num = e%2;
    if(num == 0)
    {
        printf("even");
    } 
    else{
        printf("odd");
    }
}