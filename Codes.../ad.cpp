#include<bits/stdc++.h>
using namespace std;
int main()
{
	string arr[4];
	int ans=0;
	for(int i=0; i<4; i++)
	{
       cin>>arr[i];
	}
	int m = min(4,6) ;
	for(int i=0; i<m; i++)
	{
		for(int j=i; j<4; j++)
		{  
			if(i==0 ){if( arr[i][j]!=arr[i][j-1]){ans++;}}
		    // else if(j==0){if( arr[i][j]!=arr[i-1][j]){ans++;}} 
		    else
		    {if(arr[i][j]!=arr[i-1][j] && arr[i][j]!=arr[i][j-1]){ans++;}}
        }
		for(int j=i+1; j<6; j++)
		{  
		   if(i==0 ){if(arr[j][i]!=arr[j-1][i]){ans++;}}
		   // else if(j==0){if(arr[j][i]!=arr[j][i-1]){ans++;}}	 
           else{if(arr[j][i]!=arr[j-1][i] && arr[j][i]!=arr[j][i-1]){ans++;}}
		}
	}
	cout<<ans<<endl;
}
