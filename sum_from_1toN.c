#include <stdio.h>

int main()
{
  int e;
  int sum=0;
  printf("enter num: ");
  scanf("%d", &e);
  for(int i=1; i<=e; i++)
  {
       sum = sum + i;
  }
  printf("%d\n", sum);
}