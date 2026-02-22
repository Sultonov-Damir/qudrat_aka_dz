#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2;
	char ch;
	string str="",s1,s2;
	cin>>s1>>s2;
	a=s1.find(s2);
	if(a!=-1)
	s1.erase(a,s2.size());
	cout<<s1;
}
