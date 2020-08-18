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

void printarr(string expla ,char arr[],int n)
{	
	cout<<expla<<"   = ";
	for(int i=0; i<n; i++){cout<<arr[i]<<" ";} 
	cout<<endl;	
}

void solve()
{
	string str,pattern;
    cin>>str>>pattern;
   	int n = str.length();
	int m = pattern.length();
	string copy_pattern = pattern;
	string ans;


    // printarr("char after sort ",arr,n);
    sort(str.begin(),str.end());
    sort(copy_pattern.begin(),copy_pattern.end());
    
    bool flag=false; 
    bool ifpattadded=false;
    
    for(int i=0; i<m; i++)
    {
    	if(pattern[0]>pattern[i]){flag=true;}
    }
    
    int k=0,l=0;
    while(k!=m && l!=n)
    {
    	if(copy_pattern[k]==str[l]){str[l]='0'; k++;l++;}
        else {l++;}  
    } 
    // cout<<str<<" string after updations \n";
    for(int i=0; i<n; i++)
    {
       if(str[i]=='0'){ continue;}
       if(str[i]>pattern[0] && !ifpattadded)
       {
       		ans+=pattern;
            ans+=str[i];
            ifpattadded=true;
       }
       else if(str[i]==pattern[0])
       {
        	if(flag)
        	{
        		ans+=pattern;
        		ans+=str[i];
        		flag=false;
        		ifpattadded=true;
        	}
        	else
        	{
        		ans+=str[i];
        	}
       }
       else
       {
       		ans+=str[i];
       }  

    }
    if(!ifpattadded){ans+=pattern;}
    
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
