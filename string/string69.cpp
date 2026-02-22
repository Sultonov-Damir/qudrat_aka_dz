#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,s=0,n1=0,n2=0;
	char ch;
	string str="",s1,s2;
	getline(cin,s1);
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]=='(')
		{
			a++;
		}
		else if(s1[i]==')')
		{
			if(a==0)
			{
				cout<<i<<endl;
				return 0;
			}
			a--;
		}
		
	}
	if(a==0)
	cout<<0;
	else cout<<-1;
}
