#include<bits/stdc++.h>
#define loop(i,start,end) for(long i=start;i<end;i++)
using namespace std;
int main()
{   
    long num_of_books,num_of_lib,num_of_days;
    cin>>num_of_books>>num_of_lib>>num_of_days;
    long long arr[num_of_books];

    for(int i=0;i<num_of_books;i++)
    	cin>>arr[i];
    vector<long>v[num_of_lib];
    for(long i=0;i<num_of_lib;i++)
    {
    	long a,b,c;
    	cin>>a>>b>>c;
    	v[i].push_back(a);
    	v[i].push_back(b);
    	v[i].push_back(c);

    	loop(j,0,a)
    	{
    		long t;
    		cin>>t;
    		v[i].push_back(t);
    	}
    }
    long max_sum=0,cur_sum;
    long index,start;
    int flag=1;
    int store[num_of_books]={0};
    
    for(int i=0;i<num_of_lib;i++)
    {
    	cur_sum=0;
    	if(num_of_days>=ceil(v[i][0]/v[i][2]))
    	{
    		int x = num_of_days-v[i][2];
    		for(int j=3;j<x+3;j++)
    		{
    			if(store[v[i][j]]==0){
    				cur_sum+=v[i][j]*arr[v[i][j]];
    				store[v[i][j]]=1;
    			}
    			
    		}
    		if(cur_sum>max_sum)
    		{
    			max_sum=cur_sum;
    			index=x;
    			start=i;
    			flag=1;
    		}


    	}
    	if(flag==1){
    		num_of_days-=v[start][2];
    	}
    	
    
    }
    cout<<1<<"\n";
    cout<<start<<" "<<index<<"\n";

    for(int i=3;i<index+3;i++)

    {
    	cout<<v[start][j]<<" ";
    }







}
