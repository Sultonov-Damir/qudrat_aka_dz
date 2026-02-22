#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,s=1,n,m,i=0,v=0,x=1,y=1;
	cin>>b>>c;
	for(i=1;i<=10;i++)
	{
		cin>>n;
		if(x==1 and b<n and n<c)
		{
			v=n;
			x=0;
		}
		if(v<n and b<n and n<c)
		{
			v=n;
			y=i;
		}	
	}
	if(v==0) cout<<"00";
	else cout<<y;
}
