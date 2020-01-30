#include <iostream>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,a,b,bc,hu;
		cin>>n>>m;
		int arr[n]={0};
		for(int i=0; i<m; i++)
		{
            cin>>a>>b;
            bc=a;hu=b;
            arr[a-1]++;arr[b-1]++;
		}
		if(m%2==0){cout<<1<<endl; for(int i=0; i<n; i++){cout<<1<<" ";} continue;}
		int flag=0;
        for(int i=0; i<n; i++)
        {
        	if(arr[i]%2!=0){flag=1; arr[i]=-1; break;}
        }
        if(flag==1){cout<<2<<endl; 
            for (int i = 0; i <n; ++i)
            {
            	if(arr[i]!=-1){cout<<1<<" ";}
            	else{cout<<2<<" ";}
            }
        }
        else
        {   cout<<3<<endl;
            arr[bc-1]=-2; arr[hu-1]=-3;
        	for(int i=0; i<n; i++)
        	{
                if(arr[i]==-2){cout<<2<<" ";}
                else if(arr[i]==-3){cout<<3<<" ";}
                else{cout<<1<<" ";}
        	}
        }
        cout<<endl;	
	}
}