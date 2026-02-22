#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0,n1=0,n2=0,s=0;
	char ch;
	string str="",s1,s2,s3;
	getline(cin,s1);
	while(s1.find(" ",n1+1)!=-1)
	{
	    n1=s1.find(" ",n1+1);
		while(s1[n1+1]==' ')
		{
			s1.erase(n1+1,1);
		}
	}
	s1+=" ";
	for(int i='A';i<='Z';i++)
	{
		while(s1.find(" ",n2)!=-1)
		{
			if(s1[n2]==char(i))
		    {
			    str+=s1.substr(n2,s1.find(" ",n2)-n2+1);
		    }
		    n2=s1.find(" ",n2)+1;
		}
		n2=0;
	}
	s1=str;
	str="";
	s1.erase(s1.size()-1);
	cout<<s1;
}
