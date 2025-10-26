#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	bool h;
	cin>>a>>b>>c>>d;
	h=(((a-c)*(a-c)+(b-d)*(b-d))==5);
	cout<<boolalpha<<h;
}
