#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define l long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            {
            	cin>>arr[i];

            }
        if(arr[n/2]!=7 || arr[0]!=1){flag=1;}    
        for(int i=0; i<n/2&&flag!=1; i++)
        {
        	if(arr[i]==arr[n-1-i] && (arr[i]+1==arr[i+1] || arr[i]==arr[i+1]) ){}else{flag=1;}
        }
        if(flag==1){cout<<"no"<<endl;}else{
        	cout<<"yes"<<endl;}    

	
}
return 0;
}
