#include <iostream>
#include<vector>
using namespace std;
void modify(vector< vector<int> > &v,int i,int prev)
{
	if(v[i].size()==1 && i!=1){ v[i][0]*=-1; return;}
	int j=0;
	while(v[i].size()>1 || (i==1 && v[i].size()>0))
	{
		if(v[i][j]!=prev){

			modify(v,v[i][j],i);
			v[i].erase(v[i].begin()+j);
		}else{ j++; }

	}

}
int main()
{
	ios_base::sync_with_stdio(false);
	int n,q,a,b,data,sec=0,node;
	long long int ans=0;
	char sign;
	vector< pair <int,int> > vect(500001);
	cin>>n>>q;
	vector< vector <int> > v(n+1);
    for(int i=1; i<n; i++)
	{
	    cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	modify(v,1,0);
	v[1].push_back(0);
	for(int i=1; i<=n; i++)
    {   
	    cin>>data;
		v[i].push_back(data);			
    }
    //output tree
	for(int i=1; i<=n; i++)
    {   cout<<endl<<i<<" "<<endl;
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<" "<<v[i][j]<<" ";
        }
    }
    cout<<endl;
    //
    for(int i=0; i<q; i++)
    { 
    	sec++;
    	cin>>sign;
    	if(sign=='+')
    	{
    		cin>>node>>data;
	        vect[sec].first=node;
	        vect[sec].second=data;

    	}
    	if(sign=='?')
    	{
            cin>>node;
            int temp=sec+1,ansi=node;
            bool flag=0;
            ans=0;
            if(v[node][0]<0 || n==1){flag=1;}
            while(temp)
            {
            	if(flag==1)
            	{
            		if(ansi!=0)
                    {
            		    ans+=v[ansi][1];
                        for(int ii=1; ii<=temp-1; ii++)
                        {
                            if(vect[ii].first==ansi)
                            {
                            	ans+=vect[ii].second;
                            }	
                        }
            		    ansi=v[ansi][0];
            		}    
            		if(ansi<0){ansi*=-1;}
            		

            	}
            	else
            	{   
                    if(ansi!=0)
                    {    
                        if(vect[temp-1].first==ansi){ans+=vect[temp-1].second;}
            		    if(temp==1){ans+=v[ansi][1];}
            		    ansi=v[ansi][0];
            		}

                     
            	}
            	temp--;
            }
            cout<<ans<<endl;
    	}
    }
}