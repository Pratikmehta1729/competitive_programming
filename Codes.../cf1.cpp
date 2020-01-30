#include<iostream>
#include<math.h>
using namespace std;

int main()
{
 //  int t; cin>>t;
 //  while(t--)
 //  {	
 //     unsigned long long int n,k;
 //     cin>>n;
 //     int arr[60];arr[0]=1;arr[1]=0;
 //     for(int i=2; i<=59; i++){arr[i]=(arr[i-1]+arr[i-2])%10;} 	
 //     k=log2(n);
 //     cout<<k<<endl;
 //     k=pow(2,k);
 //     cout<<k<<endl;
 //     k%=60;
 //    cout<<arr[k]<<endl;
 //    // //cout<<k;
 //    // int a=0,b=1,c;
 //    // cout<<a<<" "<<b<<" ";
 //    // for(int i=3; i<=70; i++)
 //    // {
 //    //     c=(a+b)%10;
 //    //     a=b;
 //    //     b=c;
 //    //     cout<<b<<" ";
 //    //     if(i==60){cout<<endl;}
 //    // }
 //    // cout<<endl;
 //   // cout<<b<<endl;
 // }
int arr[1000];
arr[0]=0; arr[1]=1;
for(int i=2; i<1000; i++)
{
	arr[i]=(arr[i-1]+arr[i-2])%10;
}
for(int i=0; i<1000; i++)
{
	cout<<i<<" * )"<<arr[i]<<" : "<<arr[(i%60)]<<endl; 
}
}