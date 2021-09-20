/************************
created by Rohith D'souza 
at 20 Sep 2021 17:42	 
************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    int a[100],max1=0,max2=0;
    for ( int i=0;i < t;i++)
    	cin >> a[i];
    for (int i =0; i < t;i++)
    {
    	if (a[i] > max1)
    		max1= a[i];
    	if ( a[i] < max1&& a[i] > max2)
    		max2= a[i];
    }
    cout << max2;
    return 0;
}