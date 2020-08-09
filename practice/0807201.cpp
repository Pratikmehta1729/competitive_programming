/***********************
* author: Pratik Mehta *
* created:09.07.20     *
***********************/

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


using namespace std;

void solve()
{
   int a=0;
   int count=0;
   std::vector<int> v1;
   std::vector<int> v2;
   while(a!=-1)
   {
   	cin>>a;
    v1.push_back(a);
    count++;
   }  
   cout<<count<<endl;
   a=0;
   while(a!=-1)
   {
   	cin>>a;
    v2.push_back(a);
   }
   // for(int i=0; i<v1.size(); i++)
   // {
   // 	if(v1[i]!=v2[i]){cout<<v2[i]<<" "<<v1[i]<<endl;}
   // }
   cout<<v2.size()<<" "<<v1.size();
}


int main(){
    int T;
    cin>>T;
    while(T--){
          solve();
    }
    return 0;
}
