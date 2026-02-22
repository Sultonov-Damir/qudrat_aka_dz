#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	string str="",s1="",s2;
	getline(cin,s1);
	cin>>a;
	for(int i=0;i<s1.size();i++)
	{
		if(isalpha(s1[i]))
		{
			if(s1[i]>'z'-a) s1[i]='a'+a+s1[i]-'z'-1;
			else if(s1[i]>'Z'-a) s1[i]='A'+a+s1[i]-'Z'-1;
			else s1[i]+=a;
		}
	}
	cout<<s1;
}
