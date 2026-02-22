#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,n1,n2;
	char ch;
	string str="",s1,s2;
	cin>>str>>s1;
	a=str.find(s1);
	if(a==-1) cout<<"false";
	else cout<<"true";
}
