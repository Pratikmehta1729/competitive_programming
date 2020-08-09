#include<bits/stdc++.h>
using namespace std;

bool isZero (int i) 
{
    return i == 0;
}
vector<int> removeZero(vector<int> v)
{
	std::vector<int>::iterator newIter = std::remove_if( v.begin() , v.end() , isZero);
	v.resize( newIter -  v.begin() );
	return v;
}
void printarr(vector<int> v){
	for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    cout<<endl;
}
int distributeCandies(vector<int> A, vector<int> G)
{   
	
	sort(G.begin(),G.end());
	int n = A.size();
	int m = G.size();
	int ans=0;
	int index=0;
	for( int i=0; i<m; i++)
	{
        if(G[i]<=A.size())
        {  
        	std::sort(A.begin(), A.end(), std::greater<int>());
        	int j =0;
        	for( j=0; j<G[i]; j++)
        	{   
        		A[j]--;
        		 
        	}
        	A=removeZero(A);
            printarr(A);
        	ans++;
            

        }
	}
	return ans;
}


// int main()
// {
// 	vector<int> v1{2,2,1,2,2};
// 	vector<int> v2{2,2,5};
// 	cout<<distributeCandies(v1,v2);
// }

// int main()
// {
   
//     std::vector<int> myarray;

//     myarray.push_back( 0 );
//     myarray.push_back( 1 );
//     myarray.push_back( 0 );
//     myarray.push_back( 3 );
//     myarray.push_back( 9 );
//     std::sort(myarray.begin(), myarray.end(), std::greater<int>());
//     for(int i=0; i<myarray.size(); i++)cout<<myarray[i]<<" ";
//     	cout<<endl;
//    vector<int> v = removeZero(myarray);

//     for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
//     // cout<<endl;
//     // std::vector<int>::iterator newIter = std::remove_if( myarray.begin() , myarray.end() , isZero);
//     // for(int i=0; i<myarray.size(); i++)cout<<myarray[i]<<" ";
//     // 	cout<<endl;
//     // myarray.resize( newIter -  myarray.begin() );
//     // for(int i=0; i<myarray.size(); i++)cout<<myarray[i]<<" ";

//     return 0;
// }
// int main()
// {   
// 	int i=0; 
// 	for(i=0; i<5; i++)
// 	{

// 	}
// 	cout<<i;


// }

// int main()
// {
//     long n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     	cin>>arr[i];
//     long m;
//     cin>>m;
//     int brr[m];
//     for(int i=0;i<m;i++)
//     	cin>>brr[i];
//     sort(brr,brr+m);
//     sort(arr,arr+n);
//     for(int i=1;i<n;i++)
//     	arr[i]=arr[i-1]+arr[i];
//     for(int j=1;j<m;j++)
//     	brr[j]+=brr[j-1];
//     int count=0;
//     for(int i=0;i<min(m,n);i++)
//     {
//     	if(arr[i]>=brr[i])
//     		count++;
//     	else
//     		break;

//     }
//     cout<<count;
// }




#include<bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
void DFS(int arr[],int n,int count)
{
	for(int i=1;i<=n;i++)
	{
		// cout<<arr[i]<<" ";
		if(arr[i]==count and arr[i-1]==-1)
			arr[i-1]=count+1;
		if(arr[i]==count and arr[i+1]==-1)
			arr[i+1]=count+1;
	}
	// cout<<"\n";
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==-1){
			flag=1;
			DFS(arr,n,count+1);
		}
	}
	if(flag==0)
		return;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    	int n,k;
    	cin>>n>>k;
    	int arr[n+1];
    	for(int i=0;i<=n;i++)
    		arr[i]=-1;
    	arr[0]=0;
    	for(int i=0;i<k;i++)
    	{
    		int a;
    		cin>>a;
    		arr[a]=0;
    	}
    	DFS(arr,n,0);
    	sort(arr,arr+n,greater<int>());
    	cout<<arr[0]<<"\n";
    }
}