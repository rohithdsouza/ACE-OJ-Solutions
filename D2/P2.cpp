/************************
created by Rohith D'souza 
at 16 Sep 2021 19:13   
************************/
#include <stdio.h>

int main()
{
  int n,k,j,m,p,i ;
  scanf("%d",&n);
  
  for ( i =1;i<n;i++ )
    for( j=1;j<=i;j++)
      for(k=1;k<=j;k++)
      {
        if (k*k + j*j == i*i)
          printf("%d %d %d\n", k,j,i);
      }
  return 0;
}

