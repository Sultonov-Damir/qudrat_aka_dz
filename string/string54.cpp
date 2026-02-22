#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2=0,s=0;
	char ch;
	string str="",s1,s2,s3;
	getline(cin,s1);
	for(int i=0;i<s1.size();i++)
	{
		if(isupper(s1[i])) n1++;
	}
	cout<<n1;
}
