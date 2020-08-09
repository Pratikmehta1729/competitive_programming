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
        string Inc,Out;
        cin>>Inc>>Out;
        
        vector < unordered_set<int> > v;
        //preapre graph array
        for(int i=1; i<=n; i++)
        {
            unordered_set<int> temp;
            temp.insert(i);
            
            if(Out[i-1]=='Y'&&i!=1 && Inc[i-1-1]=='Y'){temp.insert(i-1);}
            if(Out[i-1]=='Y'&&i!=n && Inc[i+1-1]=='Y'){temp.insert(i+1);}
            v.push_back(temp);
        }
        // for(int i=1; i<=n; i++)
        // {
        //     cout<<i<<" :->";
        //     unordered_set<int> :: iterator itr; 
        //     for (itr = v[i-1].begin(); itr != v[i-1].end(); itr++) 
        //     {
        //         cout<<*itr<<" ";
                    
        //     }
        //     cout<<endl;
        // }
        
        
        for(int i=1; i<=n; i++)
        {
            if(i!=1 && v[i-1].find(i-1)!=v[i-1].end())
            {
                unordered_set<int> :: iterator itr; 
                for (itr = v[i-2].begin(); itr != v[i-2].end(); itr++) 
                {
                    v[i-1].insert(*itr);
                    
                }     
            }
            if(i!=n && v[i-1].find(i+1)!=v[i-1].end())
            {
                unordered_set<int> :: iterator itr; 
                for (itr = v[i].begin(); itr != v[i].end(); itr++) 
                {
                    v[i-1].insert(*itr);
                    
                }     
            }
        }
        
        for(int i=n; i>=1; i--)
        {
            if(i!=1 && v[i-1].find(i-1)!=v[i-1].end())
            {
                unordered_set<int> :: iterator itr; 
                for (itr = v[i-2].begin(); itr != v[i-2].end(); itr++) 
                {
                    v[i-1].insert(*itr);
                    
                }     
            }
            if(i!=n && v[i-1].find(i+1)!=v[i-1].end())
            {
                unordered_set<int> :: iterator itr; 
                for (itr = v[i].begin(); itr != v[i].end(); itr++) 
                {
                    v[i-1].insert(*itr);
                    
                }     
            }
        }
        cout<<"Case #"<<tt<<":"<<endl;
        for(int i=0; i<n; i++)
        {   string ans="";
            for(int j=1; j<=n; j++)
            {
                if(v[i].find(j)!=v[i].end()){ans+='Y';}else{ans+='N';}
            }
            cout<<ans<<endl;
        }
        
        
    }
}