/***********************
* author: Pratik Mehta *
* created:15.07.20     *
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
#define FOR(i,a,b) for(int i = a;i < b;++i)
#define ROF(i,a,b) for(int i = a;i >= b;--i)
#define V std::vector<int>
#define MI std::map<int,int>
#define MS std::map<int,string>
#define SM std::map<string, int>
#define mod 1000000007

using namespace std;




int main(){


     int n;
     cin>>n;
     unsigned long long int total_vol=0;
     int h,b;
     cin>>h>>b;

    
     vector<int> v(n);
     for(int i=0; i<n; i++){cin>>v[i]; total_vol+=v[i]*h*b;}
     //possiblity of wrong ans here becomes of if value overflow ofin vector

     unsigned long long int  max_l = 0;
        vector<unsigned long long int> left(n), right(n);
        stack<int> s1;
        FOR(i,0,n) {
            while (!s1.empty() && v[s1.top()] >= v[i]) s1.pop();
            left[i] = s1.empty() ? 0 : s1.top()+1;
            s1.push(i);
        }
        stack<int> s2;
        ROF(i,n-1,0){
            while (!s2.empty() && v[s2.top()] >= v[i]) s2.pop();
            right[i] = s2.empty() ? n-1 : s2.top()-1;
            s2.push(i);
            max_l = max(max_l, ((right[i]-left[i]+1) * v[i]));
        }
        cout<<(total_vol-(max_l*h*b))%mod;
    return 0;
}
