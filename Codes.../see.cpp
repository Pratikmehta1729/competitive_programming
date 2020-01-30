#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(c==0){if(a<=b){cout<<0<<endl; }else{cout<<1<<endl;}continue;}
        a+=c;
        if(a<=b){cout<<0<<endl;}
        else
        {  
        	a=ceil((a-b)/float(2));
        	if(a>c+1){a=c+1;}
        	cout<<a<<endl;

        }		
	}
	// int a=7,b=3;

}