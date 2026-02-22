#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,m,t=0,s=0;
	cin>>n;
	int a[2*n],b[2*n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if((a[j]+b[j])<(a[j+1]+b[j+1]) or ((a[j]+b[j])==(a[j+1]+b[j+1]) and a[j]>a[j+1]))
			{
				swap(a[j+1],a[j]);
				swap(b[j+1],b[j]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<b[i]<<endl;
	}
}
