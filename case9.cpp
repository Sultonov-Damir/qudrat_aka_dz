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
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            a=31; break;
        case 4: case 6: case 9: case 11:
            a=30; break;
        case 2:
            a=28; break;
	}
	if(a==c)
	{
		c=0;
		b+=1;
	}
	c++;
	cout<<c<<" "<<b;
}
