#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,c;
	int b;
	cin>>c>>b;
	switch(b)
	{
		case 12: c+=30;
		case 11: c+=31;
		case 10: c+=30;
		case 9: c+=31;
		case 8: c+=31;
		case 7: c+=30;
		case 6: c+=31;
		case 5: c+=30;
		case 4: c+=31;
		case 3: c+=28;
		case 2: c+=31;
		case 1: break;
	}
	cout<<c;
}
