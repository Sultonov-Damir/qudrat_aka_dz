#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	string str="",s1="",s2;
	getline(cin,s1);
	s1+="";
	while(s1.find(" ",n1+1)!=-1)
	{
		n1=s1.find(" ",n1+1);
		while(s1[n1+1]==' ')
		{
			s1.erase(n1+1,1);
		}
	}
	cout<<s1;
}
