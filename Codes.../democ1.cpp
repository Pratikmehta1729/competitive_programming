#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,n;
	cin>>n;

	int ans=INT_MIN;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		ans=max(ans,a);
	}
	cout<<a<<endl;
}