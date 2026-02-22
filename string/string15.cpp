#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0;
	char ch;
	string str="",st="";
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if('a'<=str[i] and 'z'>=str[i]) a++;
		if(-96<=str[i] and  -17>=str[i]) a++;
	}
//    while(1)
//    {
//    	cin>>ch;
//    	a=ch;
//    	cout<<"="<<a<<endl;
//	}
	cout<<a;
}
