#include <bits/stdc++.h>
using namespace std;
int main()
{   //only one entry then -1
	//can be out by n = any value if came equals
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int maxi =0;
		int ans=-1;
		pair <int, int> rg[n] ;
		for(int i=0; i<n; i++)
		{
			cin>>rg[i].first>>rg[i].second;
			arr
		}
		sort(rg,rg+n);
		int count=0;
		int ans=n;
		int f=rg[0].first,l=rg[0].second;
		for(int i=1; i<n; i++)
		{
              if(l<rg[i].first){ if(count<ans){ans=count;} count=0;}
              else
              	{ 
              		if(rg[i].second<l){l=rg[i].second;}
                    count++;
              	}
		}
		
	}
}
//find whole using sort and search method
//min -1 - common