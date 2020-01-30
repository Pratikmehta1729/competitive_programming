#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
    int m,n;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)
    {
    	cin>>a[i];
    }
    int ans=0,index=0;
    int arr[100001]={0};
    for(int i=0; i<m; i++)
    {
    	cin>>b[i];
    }
    for(int i=0; i<m; i++)
    {
       if(arr[b[i]]!=0){ans+=1;}
       else{
       	while(a[index]!=b[i])
       		{arr[a[index]]=1; index++;}
       	ans+=(index-i)*2+1;
       	//cout<<index<<" "<<(index-i)*2+1<<endl;
       }
    }
    cout<<ans<<endl;

    }
}