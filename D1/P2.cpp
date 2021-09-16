/************************
created by Rohith D'souza 
at 15 Sep 2021 20:10   
************************/

#include <stdio.h>

int main()
{
const int iWallCost = 18;
  const int eWallCost = 12;
  
  int iWalls ,eWalls,i ;
  scanf("%d",&iWalls);
  scanf("%d",&eWalls);
  
  float iArea[101],eArea[101];
  float cost=0;
  
  for (i=0;i<iWalls;i++)
  {
    scanf("%f",&iArea[i]);
    cost+=iArea[i]*iWallCost;
  }
  for (i=0;i<eWalls;i++)
  {
    scanf("%f",&eArea[i]);
    cost+=eArea[i]*eWallCost;
  }
  
  printf("%s %.1f","Total estimated Cost : ",cost);
  return 0;
}
  