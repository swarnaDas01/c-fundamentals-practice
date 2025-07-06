#include <stdio.h>

int main()
{
    
//     for(int i=1; i<=10; i++ )
//     {
//         if(i%2==0)
//         {
//             printf("%d\n", i);
//         }
//     }

     int e;
     printf("Enter Number: ");
     scanf("%d", &e);
     for(int i=1; i<=e; i++ )
   {
       if(i%2==0)
        {
         printf("%d -Even\n", i);
        }
        else
        {
        printf("%d -Odd\n", i);
        }
     }
 
 }