#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	int arr[n],q;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(k%arr[i]==0){arr[i]=0;}
	}
	int pp=0;
	for(int i=n-1; i>=0; i--)
	{
       if(i==n){if(arr[i]==0){pp=i; arr[i]=i;}else{pp=-1; arr[i]=-1;} continue;}
       if(arr[i]==0){pp=i;}
       arr[i]=pp;
	}
    
    cin>>q;
    int Q[q];
    for(int i=0; i<q; i++)
    {
       cin>>Q[i];
       

    }

}