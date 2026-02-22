#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Rus");
	int n,k=0,k1=0,k2=0,m,h,x=0,y=0,b,s=0,t=0; 
	cin>>m>>n;
	int a[m+1][n+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][k1]>a[i][j]) k1=j;
			if(a[i][k2]<a[i][j]) k2=j;
		}
		swap(a[i][k1],a[i][k2]);
		k1=0;
		k2=0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	
	
	
}
