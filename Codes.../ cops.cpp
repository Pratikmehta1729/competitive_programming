#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,x,y;
		cin>>m>>x>>y;
		x=x*y;
		int a[101]={0};
		for(int i=0; i<m; i++)
		{
			int a;
			cin>>a;
			int j=a-x,km=a+x;
			if(j<0){j=0;}
			if(km>100){km=100;}
			for( j=1; j<=km; j++)
			{
               arr[j]++;
			}
		}int ans=0; 
		for(int i=1; i<=100; i++)
		{
           ans++;
		}
		cout<<ans<<endl;
	}
}
