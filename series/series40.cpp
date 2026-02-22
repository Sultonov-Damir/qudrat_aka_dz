#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int b=0,c=0,k,n,i=1,j=0;
	cin>>k;
	while(k--)
	{
	    cin>>n;
		while(cin>>b and b!=0)
		{
			i++;
			if(n>b) c--;
			else c++;
			n=b;
			if(abs(c)==2 and j==0) 
			{
				j=1;
				cout<<i<<endl;
			}
		}
		if(j==0) cout<<i<<endl;
		c=0;
		i=1;
		j=0;
	}
}
