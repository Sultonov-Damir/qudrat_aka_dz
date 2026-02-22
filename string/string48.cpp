#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2=0,s=0;
	char ch;
	string str="",s1,s2,s3;
	getline(cin,s1);
	s1+=" ";
	while(s1.find(" ",n1+1)!=-1)
	{
	    n1=s1.find(" ",n1+1);
		for(int i=n2+1;i<n1;i++)
		{
			if(s1[n2]==s1[i])
			s1[i]='.';
		}
		n2=n1+1;
	}
	s1.erase(s1.size()-1);
	cout<<s1;
}
