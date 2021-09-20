/************************
created by Rohith D'souza 
at 16 Sep 2021 19:05   
************************/

#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  if ( n==0)
    printf("Time Estimated : 0 Minutes");
  if( n > 0 && n <= 2000)
    printf("Time Estimated : 25 Minutes");
  else if (n <=4000)
   printf("Time Estimated : 35 Minutes");
  else if (n <=7000)
    printf("Time Estimated : 45 Minutes");
  else 
    printf("INVALID INPUT");
  return 0;
}