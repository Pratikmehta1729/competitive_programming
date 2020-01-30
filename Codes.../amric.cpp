#include <bits/stdc++.h>
using namespace std;
int n,m,k;
int arr[n][m]={0};
int check[n][m]={0};
int checkl(int l){
   int i=0,j=l,count=1;
   int pi=0,pj=l;
   i++; j--;
   int ans=0;
   while(i<n && j>=0)
   {  
     if(arr[i][j]==arr[pi][pj] && count<=k)
     {
          pi=i; pj=j;
          if(count<=k){ans++;}
          count=0;          
     }
     else{i++; j--; count++;}
   }

}
int checkr(int r){
   int i=0,j=r,count=1;
   int pi=0,pj=l;
   i++; j++;
   int asn=0;
   while(i<n && j<m)
   {  
     if(arr[i][j]==arr[pi][pj] )
     {

          pi=i; pj=j;
          if(count<=k){ans++;}
          count=0;
     }
     else{i++; j++; count++;}
   }

}
int main()

{
	cin>>n>>m>>k;
    int ans=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
   for(int i=0; i<m; i++)
   { check1(i);
   	arr[0][i]
   	arr[n-1][i]
   }
}