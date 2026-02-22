#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1=0,n2=0,s=0;
	char ch='1';
	string str="",s1="",s2="";
	getline(cin,s1);
	n1=s1.size();
	for(int i=0;i<n1;i++)
	{
		if(isalpha(s1[i]))
		{
			if(ch!='1')
			{
				if(ch>s1[i])
				{
					cout<<s1[i]<<endl;
					return 0;
				}
			}
			ch=s1[i];
		}
	}
	cout<<0;
}
