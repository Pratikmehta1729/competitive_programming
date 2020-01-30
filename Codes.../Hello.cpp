// C++ program to find modular inverse of a under modulo m 
// This program works only if m is prime. 
#include<iostream> 
using namespace std; 
  
// C function for extended Euclidean Algorithm 
int gcdExtended(int a, int b, int *x, int *y); 
  
// Function to find modulo inverse of a 
int modInverse(int a, int m) 
{ 
    int x, y; 
    int g = gcdExtended(a, m, &x, &y); 
    if (g != 1) 
        cout << "Inverse doesn't exist"; 
    else
    { 
        // m is added to handle negative x 
        int res = (x%m + m) % m; 
        return res; 
    } 
} 
  
// C function for extended Euclidean Algorithm 
int gcdExtended(int a, int b, int *x, int *y) 
{ 
    // Base Case 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    int x1, y1; // To store results of recursive call 
    int gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    // Update x and y using results of recursive 
    // call 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
} 
// Driver Program 
int main() 
{ 
	int a = 2, m =1000003 ;
    string str="jsksdkjjjdlvlckdlsdkldkljsljdladklgiunvoidsjz";
    int n=str.length();
    long long int arr1[n+1],arr2[n+1];
    arr1[0]=1;arr2[0]=1;arr1[1]=1;arr2[1]=1;
    for(int i=2; i<n+1; i++)
     {
     	arr1[i]=arr1[i-1]*i;
        arr1[i]%=m;
        arr2[i]=modInverse(arr1[i], m);
     }
     int arr[26]={0};
     arr[str[n-2]-97]++;
     // arr[str[n-1]-97]++;
     cout<<arr[str[n-1]-97];
    //  for(int i=n-2; i>=0; i++)
    //  {
          
    //  }
    //  // for(int i=0; i<n+1; i++)
    //  // {
    //  // 	cout<<i<<" -"<<arr1[i]<<" "<<arr2[i]<<" "<<(arr1[i]*arr2[i])%1000003<<endl;
    //  // }
    // // cout<<modInverse(2, m); 
	
	return 0; 
} 
