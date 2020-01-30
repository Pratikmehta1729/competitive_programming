#include<iostream>
using namespace std;
int main()
{
	int  n,d;
	cin>>n;
	cin>>d;
	int a,sumo=0,sume=0;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		if(a%2==0){sume++;}
		else{sumo++;}
	
	}
	if(d%2==0){sume=sumo*250;}else{sume=sume*250;}
    cout<<sume<<endl;
}