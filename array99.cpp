#include<iostream>
#include<cmath>
using namespace std;

void shift(int a[],int &n,int x);

int main()
{
	int n,t=0,s=0,r,y,m,k,h;
	cin>>n;
	int a[n+1],b[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j]){
				t++;
			}
			if(t==3)
			{
	           shift(a,n,j);
               break;	
			}
	    }
		t=0;
	}
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}	
void shift(int a[],int &n,int x)
{
	if(x!=0)
	{
        for(int i=x;i<n-1;i++)
        {
    	    a[i]=a[i+1];
	    }
	    n--;
	}	
}
