#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	char ch;
	string str="",s1="",s2="";
	getline(cin,s1);
	n1=s1.size();
	for(int i=0;i<n1;i++)
	{
		if(i%2==0) str+=s1[i/2];
		else str+=s1[-i/2+n1-1];
	}
	cout<<str;
}
