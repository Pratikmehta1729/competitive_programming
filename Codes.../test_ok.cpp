#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int q,index,op,li=1;
	cin>>q;
	vector<int> v;
	bool arr[500001];
	arr[0]=1;
	cout<<arr[0];
	while(q--)
	{   
		cin>>op;
		if(op==0)
		{ int i=li;
			cout<<i<<" "<<arr[i]<<endl;
          if(v.size()!=0){cout<<v[0]<<endl; arr[v[0]]; v.erase(v.begin());}
          else{while(arr[i]!=0){i++;}li=i; arr[li]=1;cout<<"good then"<<li<<endl; i++; li=i;}          
		}
		else
		{
          cin>>index;
          int n = v.size();
          for(int i=0; i<n; i++)
          {
          	if(v[i]>index){v.insert(v.begin()+i,index);}
          }
          if(n==0){v.push_back(index);} 
		}
	}
}