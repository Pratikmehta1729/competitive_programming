#include<bits/stdc++.h>
using namespace std;
void solve(string str)
{   int arr[52]={0};
    string ans;
    map< char,int> m;
	for(int i=0; i<str.length(); i++)
	{
		if(m[str[i]]==0){ans+=str[i]; m[str[i]]=1;}
	}
	cout<<ans<<endl;
}
int main()
{
	// int t;
	// cin>>t;
	// string str;
	// for(int i=0; i<t; i++)
	// {
 //        cin>>str;
 //        solve(str);
	// }


    // string str;
    // cin>>str;

    for(int i=0; i<500; i++)
    {
    	cout<<char(i)<<" * "<<i<<endl;
    }

	// int x=0;
    // a = (a < b) ? b : -b;
	// map< string,int> m;
	// m["4"]=5;
	// cout<<m["4"]<<" ";
	// cout<<m["abcd"];
	
}