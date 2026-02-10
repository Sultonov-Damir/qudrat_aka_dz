#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int m,k=0,s=0,t=0;
	cin>>m;
	int a[m+1][m+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
//	int x = 0, y=m-1;
//	int n = m-1;
//	int p = n,f=0;
//	while(true){
//		cout << x << ":" << y << " ";
//	
//		if(x == y && x == n) f=1;
//		if((x + 1) >n || (y + 1) > n){
//			x = 0;
//			p--;
//			y = abs(p);
//			cout << endl;
//			if(f) swap(x,y);
//		}else{
//			x++;
//			y++;
//		}
//		
//		if(p==-n-1) break;
//		
//	}
	
	for(int i=m-1;i>=-(m-1);i--)
	{
		int g=0,f=abs(i);
		if(i<0) swap(g,f);
		for(int j=abs(i);j<m;j++)
		{
			s+=a[g][f];
			g++;
			f++;
		}
		cout<<s<<endl;
		s=0;
	}
	
}
