#include <iostream>
using namespace std;
int main()
{

	string s;
	cin>>s;
	int r=0,b=0;
	for(int i=0 ;i<s.length(); i++)
	{
		if(s[i]=='R'){r++;}
		else{b++;}
	}
	int ans=1;
    if(r%2!=0 && b%2!=0){cout<<3<<endl;}
    else if(r%2!=0 || b%2!=0){cout<<2<<endl;}
    else{cout<<1<<endl;}	
	
}