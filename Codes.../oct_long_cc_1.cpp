#include <iostream>
#include<math.h>
using namespace std;
int arr[1000000]={0};
int ans=0;
void  allFactors(int A) {
    //vector<int> a;
    int c=1;
     
    while(c<=sqrt(A))
    {
        if(A%c==0){arr[c-1]++; if(c!=A/c){arr[(A/c)-1]++;}}
        c++;
    }
//    a.push_back(c);
   //sort(a.begin(),a.end());
   // return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
         int n,a;
         cin>>n;
         for(int i=0; i<n; i++)
         {
         	cin>>a;
         	ans=arr[a-1]>ans?arr[a-1]:ans;
         	allFactors(a);
         }
         cout<<ans<<endl;

	}
}