/************************
created by Rohith D'souza 
at 15 Sep 2021 20:10   
************************/

#include <stdio.h>

int main()
{
  int n,k,j,m,p,i ;
  scanf("%d",&n);
  scanf("%d",&k);
  scanf("%d",&j);
  scanf("%d",&m);
  scanf("%d",&p);
  
  int bm,pm;
  bm= m/k;
  pm = p/j;

  printf("%s %d","Number of Monkeys left on the Tree:",n-(bm+pm+1));
  return 0;
}