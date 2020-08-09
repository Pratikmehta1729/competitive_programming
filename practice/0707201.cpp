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
#include <unordered_map>
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
#define VI std::vector<int>
#define MI std::map<int,int>
#define MS std::map<int,string>
#define SM std::map<string, int>

//This code solely belongs to Pratik Mehta
using namespace std;

void solve()
{

}


int main(){
	int n;
	cin>>n;
	VI v(n);
    int four=0;
    int two=0;
    unordered_map<int,int> um;
    FOR(i,0,n)
    {
     cin>>v[i];
     if(um[v[i]]/4!=(um[v[i]]+1)/4){
            	++four;
            	--two;
            	++um[v[i]];
            	
            }
            else{
            	if(um[v[i]]/2!=(um[v[i]]+1)/2)
            	{
            		++two;
            		++um[v[i]];
            		
            	}
            	else{
            		++um[v[i]];
            		
            	}
            }
   }
    
   

    int T;
    cin>>T;
    while(T--){
        string s1;
        int val;
        cin>>s1>>val;
        if(s1[0]=='+')
        {
            if(um[val]/4!=(um[val]+1)/4){
            	++four;
            	--two;
            	++um[val];
            }
            else{
            	if(um[val]/2!=(um[val]+1)/2)
            	{
            		++two;
            		++um[val];
            	}
            	else{
            		++um[val];
            	}
            }

        }
        else
        {
            if(um[val]/4!=(um[val]-1)/4)
            {
            	four--;
            	two++;            		
            	

            	--um[val];
            }
            else if(um[val]/2!=(um[val]-1)/2)
            {
            	--two;
            	--um[val];
            }
            else{
            	--um[val];
            }
        
        }

        if(four>=2 || (four==1 && two>=2)){
        	// cout<<"four two"<<four<<" "<<two<<" "; 
        	cout<<"YES"<<endl;}
        else{
        	 // cout<<"four two"<<four<<" "<<two<<" ";
             cout<<"NO"<<endl;}  
    }
    return 0;
}
