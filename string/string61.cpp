#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	string str="",s1="",s2;
	getline(cin,s1);
	n1=s1.rfind('\\');
	n2=s1.rfind('\\',n1-1);
	if(n2!=-1)
	s1=s1.substr(n2+1,n1-1-n2);
	else
	s1="\\";
	cout<<s1;
}
