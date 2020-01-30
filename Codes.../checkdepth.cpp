#include<iostream>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int ans=0,max=0;
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]==')'){ans-=1;}
		else if(str[i]=='('){ans+=1;}
		max=max<ans?ans:max;
	}
	ans=ans<0?-1:max;
	cout<<ans<<endl;
}