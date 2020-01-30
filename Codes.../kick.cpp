// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// // void do(int a)
// // {

// //     int c=1;
     
// //     while(c<=sqrt(A))
// //     {
// //         if(A%c==0){arr[c]++; if(c!=A/c){arr[A/c]++;}}
// //         c++;
// //     }
// // //    a.push_back(c);

// // }
// int main()
// {

// 	int t;
// 	cin>>t;
// 	for(int ka=1; ka<=t; ka++)
// 	{

//      //int arr[100000]={0};
//      int n,m,r;
//      cin>>n>>m>>r;
//      int arr[n+1]={0},tr;
//      for(int i=0; i<m; i++)
//      {   cin>>tr;

//      	 int c=1;
     
//     while(c<=sqrt(tr))
//     {
//         if(tr%c==0){arr[c]++; if(c!=tr/c){arr[tr/c]++;}}
//         c++;
//     }
     	 
//      }
//      int ans=0;
//      for(int i=0; i<r; i++)
//      {
//      	cin>>tr;
//      	int gk=n/tr;
//      	gk-=arr[tr];
//      	ans+=gk;
//      }
     
//      cout<<"Case #"<<ka<<": "<<ans<<endl;
     


// 	}

// }










/*

#include <bits/stdc++.h> 
using namespace std; 

#define MAX_INDEX 21 
#define MAX_SUM 1000000
#define ll long long  

ll int dp[MAX_INDEX][MAX_SUM][MAX_INDEX]; 

ll int waysutil(int index,ll int sum, int count, 
			vector<ll int>& arr, ll int K) 
{ 

	if (index < 0) 
		return 0; 

	if (index == 0) { 

		
		if (count == 0) 
			return 0; 
		//int remainder = sum ; 

		// If remainder is non zero, we cannot 
		// divide the sum by count i.e. the average 
		// will not be an integer 
		//if (remainder != 0) 
			//return 0; 
		ll int average = sum ; 

		// If we find an average return 1 
		if (average >= K) 
			return 1; 
	} 

	// If we have already calculated this function 
	// simply return it instead of calculating it again 
	if (dp[index][sum][count] != -1) 
		return dp[index][sum][count]; 

	// If we don't pick the current element 
	// simple recur for index -1 
	ll int dontpick = waysutil(index - 1, 
							sum, count, arr, K); 

	// If we pick the current element add it to 
	// our current sum and increment count by 1 
	ll int pick = waysutil(index - 1, 
						sum + arr[index], 
						count + 1, arr, K); 
	ll int total = pick + dontpick; 

	// Store the value for the current function 
	dp[index][sum][count] = total; 
	return total; 
} 

// Function to return the number of ways 
ll int ways(int N,ll int K,ll int* arr) 
{ 
	vector<ll int> Arr; 

	// Push -1 at the beginning to 
	// make it 1-based indexing 
	Arr.push_back(-1); 
	for (int i = 0; i < N; ++i) { 
		Arr.push_back(arr[i]); 
	} 

	// Initialize dp array by -1 
	memset(dp, -1, sizeof dp); 

	// Call recursive function 
	// waysutil to calculate total ways 
	ll int answer = waysutil(N, 0, 0, Arr, K); 
	return answer; 
} 

// Driver code 
int main() 
{ 
	// ll int arr[] = { 1,2}; 
	// int N = sizeof(arr) / sizeof(arr[0]); 
	// ll int K = 3; 
	// cout << ways(N, K, arr); 
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {   
    	ll ans=1;
    	ll int n,h;
    	cin>>n>>h;
    	ll int arr1[n];
    	for(int j=0; j<n; j++)
    	{
    		cin>>arr1[j];
    	}
    	ans*=ways(n, h, arr1);
    	//cout<<ways(2, 3, arr1)<<" ";
    	for(int j=0; j<n; j++)
    	{
    		cin>>arr1[j];
    	}
    	ans*=ways(n, h, arr1);
    	cout<<"Case #"<<i<<": "<<ans<<endl;
    }
	return 0; 
} 
*/



// C++ implementation to count ways 
// to sum up to a given value N 
#include <bits/stdc++.h> 

using namespace std; 

// function to count the total 
// number of ways to sum up to 'N' 
int countWays(int arr[], int m, int N) 
{ 
	int count[N + 1]; 
	memset(count, 0, sizeof(count)); 
	
	// base case 
	count[0] = 1; 
	
	// count ways for all values up 
	// to 'N' and store the result 
	for (int i = 1; i <= N; i++) 
		for (int j = 0; j < m; j++) 

			// if i >= arr[j] then 
			// accumulate count for value 'i' as 
			// ways to form value 'i-arr[j]' 
			
			if (i >= arr[j]) 
				count[i] += count[i - arr[j]]; 
	
	// required number of ways 
	return count[N]; 
	
} 

// Driver code 
int main() 
{ 
	int arr[] = {0}; 
	int m = sizeof(arr) / sizeof(arr[0]); 
	int N = 9; 
	cout << "Total number of ways = "
		<< countWays(arr, m, N); 
	return 0; 
} 
