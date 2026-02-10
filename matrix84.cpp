#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int m,k=0,s=0,t=0;
	cin>>m;
	int a[m+1][m+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=m-1;i>=-(m-1);i--)
	{
		int g=0,f=abs(i);
		if(i<0) swap(g,f);
		for(int j=abs(i);j<m;j++)
		{
			s+=a[g][f];
			g++;
			f++;
		}
		cout<<s*1.0/(m-abs(i))<<endl;
		s=0;
	}
	
}
