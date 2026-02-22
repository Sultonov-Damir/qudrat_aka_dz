#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	string str="",s1="",s2;
	getline(cin,s1);
	n2=s1.find_last_of('.');
	s1=s1.substr(n2+1,s1.size()-n1-1);
	cout<<s1;
}
