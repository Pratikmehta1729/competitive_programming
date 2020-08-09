#include<bits/stdc++.h>
using namespace std;
float matrixMedian(vector<vector<int> > &A)
{
    int max = INT_MIN, min = INT_MAX;
    int r = A.size();
    int c = A[0].size();
    int median = A[0].size()+A[1].size();
    int flag=0;
    if(median%2!=0){median+=1; median/=2;}
    else{
    	median/=2; median+=1;
    	flag=1;
    }
    for(int i=0; i<r; i++)
    {
        if(max<A[i][c-1]){max=A[i][c-1];}
        if(min>A[i][0]){min = A[i][0];}
    }

    while(min<max)
    {
        int count =0 ;
        int mid = (max+min)/2;
        for(int i=0; i<2; i++)
        {
        count+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        
        if(count<median){min=mid+1;}
        else{max=mid;}
    }
   float ans =(float)min;
    if(flag==1)
    {
    	median-=1;
    for(int i=0; i<2; i++)
    {
        if(max<A[i][c-1]){max=A[i][c-1];}
        if(min>A[i][0]){min = A[i][0];}
    }

    while(min<max)
    {
        int count =0 ;
        int mid = (max+min)/2;
        for(int i=0; i<2; i++)
        {
        count+=upper_bound(A[i].begin(),A[i].end(),mid)-A[i].begin();
        }
        
        if(count<median){min=mid+1;}
        else{max=mid;}
    }

   ans+=min;
   ans=ans/2.0;
    }    
    return ans;
}
int main()
{
	vector<vector<int> > A {{-50, -41, -40, -19, 5, 21, 28},{-50, -21, -10}};
	cout<<matrixMedian(A);
}