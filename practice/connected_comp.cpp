/***********************
* author: Pratik Mehta *
* created:16.07.20     *
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
#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define ROF(i,a,b) for(int i = a;i >= b;--i)
#define V std::vector<int>
#define MI std::map<int,int>
#define MS std::map<int,string>
#define SM std::map<string, int>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;

void dfs(int val, unordered_map<int, set<int> > &rec, unordered_map<int, int>& m, int count)
{
	m[val]=count;
	for(auto i : rec[val])
	{
		if(m[i]==0){
           dfs(i,rec,m,count);
		}
		
	}

}

int main(){
	IOS
	std::vector< pair<int,int> > v;

	v.push_back(make_pair(1,2));
	v.push_back(make_pair(1,3));

	v.push_back(make_pair(4,5));
	v.push_back(make_pair(5,6));

	v.push_back(make_pair(6,1));

	v.push_back(make_pair(7,8));
	v.push_back(make_pair(8,9));
    
    unordered_map<int, int> m;

    unordered_map<int,set<int> >record;

    int n = v.size();
    for(int i=0; i<n; i++)
    {

    	record[v[i].first].insert(v[i].second);
    	record[v[i].second].insert(v[i].first);
    }
    int count=0;


    for(auto i : record){

        if(m[i.first]==0){dfs(i.first,record,m,++count);}
    }
    
    for(auto i : m)
    {
    	cout<<i.first<<": "<<i.second<<endl;
    }


    return 0;
}
