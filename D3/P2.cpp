/************************
created by Rohith D'souza 
at 17 Sep 2021 16:06	 
************************/

#include <bits/stdc++.h>

using namespace std;
int main() {
string s , d;
 cin>>s>>d;

 transform(s.begin(),s.end() , s.begin(),::toupper);
 transform(d.begin(),d.end() , d.begin(),::toupper);
 string stops[8] = {"TH" , "GA", "IC" , "HA" , "TE", "LU" ,"NI","CA"};
 float path[8]={800,600,750,900,1400,1200,1100,1500};
 float dist=0;
 int startIndex ,endIndex;
 for(int i=0;i<8;i++)
 {
     if(s==arrs[i])
     startIndex=i;
     
     if(d==arrs[i])
     endIndex=i;
  }
  if(startIndex==endIndex)
  {
      cout<<" INVALID INPUT";
      return 0;
  }
  else
  {
      int i=startIndex+1;
      cout<<i;
        while(i!=endIndex+1)
        {
            dist+=(path[i]);
            i=(i+1)%8;
        }
        cout<<(ceil)(dist*0.005);
        return 0;
 }
}
