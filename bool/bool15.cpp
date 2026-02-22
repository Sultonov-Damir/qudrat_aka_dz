#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	bool h;
	cin>>a>>b>>c;
	h=((a>0 and b<0 and c<0) or (a<0 and b<0 and c>0) or (a<0 and b>0 and c<0));
	cout<<boolalpha<<h;
}
