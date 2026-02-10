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
		for(int j=m-1;j>=0;j--)
		{
			cin>>a[j][i];
		}
	}
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
