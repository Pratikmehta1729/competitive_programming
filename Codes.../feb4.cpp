#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		int arr[n];
		long long int a=0,b=0;
		int flag=0,c=-1,d=-1;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
            a+=arr[i];
            if((arr[i]-arr[i-1])%arr[i-1]!=0 && i>0){c=i-1; d=i;}
		}
		for(int i=0; i<n; i++)
		{
			if(p%arr[i]!=0){cout<<"YES "; b=i;  flag=1; break;}
		}

		if(flag==1){

			for(int i=0; i<n; i++)
			{
				if(i!=b){cout<<"0 ";}
				else{cout<<((p/arr[i])+1)<<" ";}
			}
			cout<<endl;
		}
		else if(c==-1 && d==-1){cout<<"NO"<<endl;}
		else{
              cout<<"YES ";
		     for(int i=0; i<n; i++)
			{
				if(i!=c && i!=d){cout<<"0 ";}
				else{cout<<(p/arr[i])-(arr[i+1]/arr[i])<<" "<<1<<" "; i++;}
			}
			cout<<endl;	
		}

		
			
	}
}
