#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,s=0,b=0,c=1,n=0,k,m,x,y;
	string str;
	cin>>n;
	s=n;
	while(s>0)
	{
		if(n%s==0) b++;
		s--;
	}
	if(b==2) cout<<"tub son";
	else cout<<"tub emas";
}
