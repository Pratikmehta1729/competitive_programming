#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long long int m,n,g;
    	cin>>n>>m;
    	if(m<n-1 || m>((n*(n+1))/2)){cout<<-1<<endl; continue;}
    	if(m==0 && n==1){cout<<0<<endl; continue;}
    	if(m==1 && n==1){cout<<1<<endl; continue;}
    	if(n==2 && m==1){cout<<1<<endl; continue;}
    	if(n==2 && (m==2 || m==3)){cout<<2<<endl; continue;}
    	if(m>=n-1 && m<=n+1){cout<<2<<endl; continue;}
    	if(m>=n+2 && m<=2*n){cout<<3<<endl; continue;}
    	g=m/n;
    	if(m%n==0){g-=1;}
    	g*=2;
    	if(m%n==0 || (m%n>n/2)){g+=1;}
    	cout<<g<<endl;

    }	
    
    
}