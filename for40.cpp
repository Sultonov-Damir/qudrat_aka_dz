#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,n=0,k,d,c=2;
	cin>>a>>b;
    for(int i=a+1;i<b;i++)
    {
    	n++;
    	for(int j=0;j<n;j++)
    	{
    		cout<<i<<" ";
		}
		cout<<endl;
	}
}
