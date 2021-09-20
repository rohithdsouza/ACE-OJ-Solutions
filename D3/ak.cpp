#include<iostream>

using namespace std;

int main()
{
	int n,index=0;
	cin>>n;

	for (int i =n;i>= n/2 ; i--)
	{
		if(i*(i-1)==2*n)
		{
		index=i;
		break;
		}
	}

	cout<<index;
}
