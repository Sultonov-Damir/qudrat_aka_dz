#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	bool h;
	cin>>a>>b>>c>>d;
	h=((abs(a-c)==abs(b-d)));
	cout<<boolalpha<<h;
}
