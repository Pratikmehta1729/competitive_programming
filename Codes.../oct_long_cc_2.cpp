#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	long long int k,n;
   	cin>>n>>k;
   	int arr[n];
   	for(int i=0; i<n; i++){cin>>arr[i];}
    if(n%2!=0 && k>n/2){arr[n/2]=0;}
   	k-=(3*n)*(k/(3*n));
    for(int i=0; i<k; i++)
    {
       arr[i%n]=arr[i%n]^arr[n-(i%n)-1];
    }
    for(int i=0; i<n; i++)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
}