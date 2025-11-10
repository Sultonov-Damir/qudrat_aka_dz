#include<iostream>
#include<cmath>
using namespace std;
void powerA234(double a, double &a2, double &a3, double &a4)
{
	a2=a*a;
    a3=a*a*a;
    a4=a*a*a*a;
    cout<<a<<" "<<a2<<" "<<a3<<" "<<a4<<endl;
}
int main()
{
	double a,b,c,a2,a3,a4,b2,b3,b4,c2,c3,c4;
	cin>>a>>b>>c;
	powerA234(a,a2,a3,a4);
	powerA234(b,b2,b3,b4);
	powerA234(c,c2,c3,c4);
}
