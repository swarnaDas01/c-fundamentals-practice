//Given four numbers A, B, C and D. Print the result of the following equation :

 //X = (A * B) - (C * D).

 #include <stdio.h>
 
 int main()
 {
  
     long long int A, B, C, D;
     scanf ("%lld %lld %lld %lld", &A, &B, &C, &D);
     long long int X;
     X = (A * B) - (C * D);

     printf("Difference = %lld", X);
     return 0;
 }