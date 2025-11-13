#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,t=0,s=0,b=0,d;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
	    if(a[i-1]>a[i])
	    {
	    	if(b>0)
		    {
		 	   b=0;
			   t+=1;
		    }
	    	s++;
		}
	    if(a[i-1]<a[i])
	    {
		    if(s>0)
		    {
	           s=0;
			   t+=1;
	        }
	    	b++;
		}
	     
	}
	if(s>0) t+=1;
	if(b>0) t+=1;
	cout<<t;
	
}	

