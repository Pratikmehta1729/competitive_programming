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
#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define ROF(i,a,b) for(int i = a;i >= b;--i)
#define V std::vector<int>
#define MI std::map<int,int>
#define MS std::map<int,string>
#define SM std::map<string, int>

//This code solely belongs to Pratik Mehta
using namespace std;

void solve()
{
   int n,m;
   cin>>n>>m;
   int arr[n];
   int ans=0;
   for(int i=0; i<n; i++){cin>>arr[i];}
   sort(arr,arr+n);
  
   	ans = arr[(m+n)/2];
   
   cout<<ans<<endl;
}


int main(){
    int T;
    cin>>T;
    while(T--){
          solve();
    }
    return 0;
}
