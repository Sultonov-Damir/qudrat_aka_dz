#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	char ch;
	cin>>ch;
	if((ch<='z' and ch>='a') or (ch<='Z' and ch>='A')) cout<<"lotin";
	else if(ch<='9' and ch>='0') cout<<"digit";
	else cout<<0;
}
