#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
       unsigned long long int s,a,b,d,n,temp;
       cin>>n;
       cout<<flush;
       s = 2*pow(10,n);
       temp = pow(10,n)-1;
       cin>>a;
       cout<<flush;
       s+=(a-2);
       cout<<s<<"\n"<<flush;
       cin>>b;
       cout<<flush;
       cout<<temp-b<<"\n"<<flush;
       cin>>d;
       cout<<flush;
       cout<<temp-d<<"\n"<<flush;
       cin>>temp;
       cout<<flush;
	}
}