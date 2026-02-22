#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1,n2;
	char ch;
	string str="",s1,s2;
	cin>>n1>>n2>>s1>>s2;
	str=s1.substr(0,n1)+s2.substr(s2.size()-n2);
	cout<<str;
}
