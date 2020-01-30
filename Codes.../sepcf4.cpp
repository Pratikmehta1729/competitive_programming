#include <bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  unsigned long long int m,ans;
	  cin>>n>>m;
	  if(m==0 && n==1){cout<<0<<endl; continue;}
	  if((n==1 || n==2)&& m==1){cout<<1<<endl; continue;}
	  if(n==2 && (m==2 || m==3)){cout<<2<<endl; continue;}
	  if(m<n-1 || m>n+(n*(n-1))/2){cout<<-1<<endl; continue;}
	  if(m>=n-1 && m<=n+1){cout<<2<<endl; continue;}
	  if(m>n+1 && m<=2*n){cout<<3<<endl; continue;}
      ans=((m/n)*2-1);
      //cout<<float(m)/float(n)<<" "<<ans<<endl;
      if(m%n>n/2){ans+=2;}else{ans+=1;}
      cout<<ans<<endl;
	}


}