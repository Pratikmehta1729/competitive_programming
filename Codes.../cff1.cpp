#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--)
  {	
     unsigned long long int n,k=0;
     cin>>n;
     int arr[60];arr[0]=1;arr[1]=0;
     for(int i=2; i<=59; i++){arr[i]=(arr[i-1]+arr[i-2])%10;} 	
      while(n-1)
      {
        n/=2;
        k++;
      }
     k=pow(2,k);
     k%=60;
    cout<<arr[k]<<endl;
 }

}