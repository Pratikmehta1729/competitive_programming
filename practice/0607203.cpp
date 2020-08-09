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
bool isPowerOfTwo (int x)  
{  
    /* First x in the below expression is for the case when x is 0 */
    return x && (!(x&(x-1)));  
} 
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void solve()
{
   int n;
   cin>>n;

   string ans;
   if(n==1){ans="Vishal";}
   else if(n==2 || n%2!=0){ans="Anjali";}
   else {

     if(isPowerOfTwo(n)){ans="Vishal";}
     else {
     	     ans="Anjali";
     if(isPrime(n/2)){ans="Vishal";}
     

     } 
   }
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
