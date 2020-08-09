#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int tt=1; tt<=t; tt++)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		stack<int> v;
        char ans='N';
		for(int i=0; i<n; i++)
		{
			if(v.size()==0 || v.top()==str[i]){v.push(str[i]);}
			else{v.pop();}
		}
		if(v.size()==1){ans='Y';}
		cout<<"Case #"<<tt<<": ";
		cout<<ans<<endl;
	}

}