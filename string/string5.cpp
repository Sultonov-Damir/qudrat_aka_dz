#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a;
	char ch;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cout<<char(-i+'z')<<"\t";
	}
}
