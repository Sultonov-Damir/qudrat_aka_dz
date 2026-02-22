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
	n2=s1.find(" ",n1+1)-n1;
	while(s1.find(" ",n1+1)!=-1)
	{
		if(n2>=s1.find(" ",n1+1)-n1)
		{
			n2=s1.find(" ",n1+1)-n1;
			str=s1.substr(n1,n2);
		} 
		n1=s1.find(" ",n1+1)+1;
	}
	cout<<str;
}
