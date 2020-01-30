#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a;
    cin>>n>>k;
    map<int,int> m;
    for(int i=0; i<n; i++)
    {
    	cin>>a;
    	m[a]++;
    }
    map<int, int>::iterator itr;
    n = m.size();
    long long int arr1[n+2],arr2[n+2],i=1,ans=0;
    arr2[0]=0;arr1[0]=0;arr2[n+1]=0;arr1[n+1]=0; 
    for (itr = m.begin(); itr != m.end(); ++itr) { 
         
        arr1[i]=itr->second;
        arr2[i]=1;
        i++; 
    }
    if(k>n){k=n;}    
    k=n-k+1;

    for(i=n; i>=k; i--)
    {
        for(int j=i; j>=1; j--)
        {   
        	arr2[j+n-i]=((arr2[j+n-i]*arr1[j])%1000000007+arr2[j+n-i+1])%1000000007;  	
            //cout<<j<<"*"<<j+n-i<<")"<<arr2[j+n-i]<<endl;
        }
        ans+=arr2[1+n-i];
        ans%=1000000007;

    }
    cout<<ans+1<<endl;

    // for(i=0; i<n; i++)
    // {
    // 	cout<<arr1[i]<<" "<<arr2[i]<<endl;
    // }


}