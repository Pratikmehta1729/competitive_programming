// Pratik Mehta 

#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdlib>
#include <cstdio>
#include <bitset>
#include <vector>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define fi first
#define se second
#define db double
#define U unsigned
#define P std::pair<int,int>
#define LL long long
#define pb push_back
#define MP std::make_pair
#define all(x) x.begin(),x.end()
#define CLR(i,a) memset(i,a,sizeof(i))
#define FOR(i,a,b) for(int i = a;i < b;++i)
#define ROF(i,a,b) for(int i = a;i > b;--i)
#define V std::vector<int>
#define MI std::map<int,int>
#define MS std::map<int,string>
#define SM std::map<string, int>

//This code solely belongs to Pratik Mehta
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
void solve()
{  
   int n;
   cin>>n;
   int arr[n];
   int min1=INT_MAX;
   FOR(i,0,n){cin>>arr[i];}
   FOR(i,1,n)
   {
     
     min1=min(min1,gcd(arr[i-1],arr[i]));
     arr[i-1]=min1;
     arr[i]=min1;
     
   }

   cout<<min1<<endl;
}


int main(){
    int T;
    cin>>T;
    while(T--){
    	
          solve();
    }
    return 0;
}
