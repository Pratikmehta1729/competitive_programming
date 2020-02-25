#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m; //long long 
		cin>>n>>m;
		int a[n],b;
		int flag=1;
		int arr[n]={0}
		for(int i=0; i<n; i++)cin>>a[i];
		for(int i=0; i<m; i++){cin>>b; arr[b-1]++;}
		for(int i=0; i<n-1; i++)
		{
			if(a[i]>a[i+1]){
				if(arr[i]!=0){swap(a[i],a[i+1]);}
				else{flag=1; break;}
			}

		}
		if(flag==1){cout<<"NO"<<endl;}
		else{cout<<"YES"<<endl;}	
		
		
	}
}