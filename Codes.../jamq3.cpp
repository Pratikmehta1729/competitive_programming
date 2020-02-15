#include <iostream>
using namespace std;
int main()
{

	int n,a,b;
	cin>>n>>a>>b;
    if(a>b){cout<<0<<endl; return;}
    long int ans = 1 + (n-2)(b-a);
    cout<<ans<<endl;
	
}