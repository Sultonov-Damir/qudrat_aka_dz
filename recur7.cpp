#include<iostream>
#include<cmath>
using namespace std;

int mtx[21][21];

void mat();
int combin2(int,int);

int main()
{
	int n,k1,k2,k3;
	cin>>n>>k1>>k2>>k3;
	mat();
	cout<<combin2(n,k1)<<" "<<endl;
	mat();
	cout<<combin2(n,k2)<<" "<<endl;
	mat();
	cout<<combin2(n,k3)<<" "<<endl;
	
}

void mat()
{
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<20;j++)
		{
			mtx[i][j]=0;
			if(i==j or j==0)
			mtx[i][j]=1;
		}
	}
}

int combin2(int n,int k)
{
	if(mtx[n][k]==0)
	{
		mtx[n-1][k]=combin2(n-1,k);
		mtx[n-1][k-1]=combin2(n-1,k-1);
	}
	return mtx[n-1][k]+mtx[n-1][k-1];
}
