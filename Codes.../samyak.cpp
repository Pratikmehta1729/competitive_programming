#include <bits/stdc++.h>
using namespace std;
int main()
{
	/* code */
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
    	cin>>arr[i];
    }
    sort(arr,arr+n);
    int min=arr[0],count=0;
    if((min==100 && n!=1) || (min>100)){cout<<"NOT POSSIBLE"<<endl;}
    else
    {   
    	int sum=min,flag=0;
    	int i=1;
    	if(n==1){count=1;}
        while(i!=n)
        {   
          if(sum+arr[i]<=100){sum+=arr[i]; i++; if(i==n){count++;}}
          else
          	{
          		count++; 
          		sum=min; 
          		if(sum+arr[i]>100)
          		{   
          			flag=1;
          		}
          	}
          if(flag==1){break;}
        }
        if(flag==1){cout<<"NOT POSSIBLE"<<endl;}
        else{cout<<count<<endl;}
    }

	return 0;
}
