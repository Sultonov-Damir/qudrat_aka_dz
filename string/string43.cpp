#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2;
	char ch;
	string str="",s1,s2,s3;
	getline(cin,s1);
	s1+=" ";
	while(s1.find(" ")!=-1)
	{
	    n1=s1.find(" ");
	    cout<<n1;
		if(s1.find("A")<n1)
		a++;
		s1.erase(0,n1+1);
	}
	cout<<a;
}
