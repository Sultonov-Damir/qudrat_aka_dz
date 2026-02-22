#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d=0,g=0;
	cin>>a>>b>>c;
	if(a>0) d+=1;
	else g=+1;
	if(b>0) d+=1;
	else g+=1;
	if(c>0) d+=1;
	else g+=1;
	cout<<d<<" "<<g;
}
