#include<iostream>
using namespace std;
int main()
{
   //40//41
    int ch=0,n,min=0,flag=0;
    cin>>n;
    string str;
    cin>>str;
    for(int i=0; i<n; i++)
    {
    	if(str[i]=='('){ch++;}
    	if(str[i]==')'){ch--;}
    	if(ch<-1){flag=1;}
    }
    if(flag==0 && ch==0){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}






	// int a,b,c;
	// cin>>a>>b>>c;
	// int ans=c+1;
	// if(c>b){ans-=(c-b);}
	// if(c>a){ans-=(c-a);}
	// cout<<ans<<endl;	
}