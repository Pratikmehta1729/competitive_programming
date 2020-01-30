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
		// int flag=0;
		// int arr[n+1]={0};
		int maxi =0;
		pair <int, double> rgu8[n] ;
		for(int i=0; i<n; i++)
		{
			cin>>rg[i].first>>rg[i].second;
            // arr[rg[i].first-1]+=1;
            // arr[rg[i].second]-=1;
            //if(maxi<rg[i].second){maxi=rg[i].second;}
		}

		sort(rg,rg+n);
		//flag=0;
		for(int i=0; i<n; i++)
		{
			// if(i!=0 && rg[i].first<=rg[i-1].second){flag=1;}
   //          arr[i]=arr[i-1]+arr[i];
   //          if(arr[i]==n){flag=-1;} 
		}
		if(flag==1){cout<<0<<endl;}
		else if(flag==-1){cout<<-1<<endl;}
		else
		{   flag=0;
			for(int i=0; i<maxi; i++)
			{

             
		
			}
		}
	}
}