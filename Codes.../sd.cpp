
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
	int n,q,a,b;
	vector< pair <int,int> > vect(500001);
	long long int ans=0;
	cin>>n>>q;
	vector< vector <int> > v(n+1);
	if(n!=1)
	{
		for(int i=1; i<n; i++)
		{
			cin>>a>>b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		int i=1;
        modify(v,i,0);
	}
	int data;
	v[1].push_back(0);
	for(int i=1; i<=n; i++)
		{   
			cin>>data;
			v[i].push_back(data);
			//cout<<" push back "<<" i "<<i<<" data:"<<data<<endl;
		}
/*    for(int i=1; i<=n; i++)
    {   cout<<endl<<i<<" "<<endl;
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<" "<<v[i][j]<<" ";
        }
    }
    cout<<endl;*/
		int sec=0;
		char arr;
		int node;
		if(n!=1)
		{
			for(int i=0; i<q; i++)
			{
				sec++;
				cin>>arr;
				if(arr=='?')
					{   
						cin>>node;
						int temp=sec,ansi=node;
						bool flag=0;
						long long int ans=0;
						 while(temp)
						{   bool one = 0,first_t=0;
							if(ansi==1 )
            	           {  //if(flag!=1){ansi=-1;}
            	              //else{ansi=1;}
                              one=1;
                            }
                            else
                            {
        	                    ansi=v[ansi][0];

                            	if(ansi<0){flag=1; ansi*=-1;}

        	                    if(flag==1)
        	                    {
        		                    if(node!=0)
        			                {          
        			                	ans+=v[node][v[node].size()-1];
        				                for(int ii=1; ii<=temp; ii++)
        				                { 
        				                	if(vect[ii].first==node)
        				                	{   first_t=1;
        				                		ans+=vect[ii].second;
        				                	}
        				                }
        					            node=0;
        			                }
        			                ans+=v[ansi][v[ansi].size()-1];
        			                for(int ii=1; ii<temp; ii++)
        			                { 
        			                   	if(vect[ii].first==ansi)
        			                   	{
        			                   		ans+=vect[ii].second;
        			                   	}
        			                }
        		                }


                            }
                            if(first_t==0){if(vect[temp].first==node){ans+=vect[temp].second; } first_t=1;}
                            temp--;
                            if(temp==0 && flag==0 && one!=1)
                            {
                                ans+=v[ansi][v[ansi].size()-1];
                            }
                            
                            if(vect[temp].first==ansi && one!=1 && flag==0){ans+=vect[temp].second; }
        	                //cout<<" temp "<<temp<<" ansi "<<ansi<<endl;
        	                //cout<<" ansi:"<<ansi<<" temp:"<<temp<<"= "<<vect[temp].first<<" data:"<<vect[temp].second<< endl;
                            
                            if(ansi==1)
                            {
                            	break;
                            }
                        }
                        //cout<<endl;
                        //  if(ans==0 && ansi!=-1 && flag==0){ans=v[ansi][v[ansi].size()-1];}
                        cout<<ans<<endl;
                    }
                    else
                    {
	                    cin>>node>>data;
	                    vect[sec].first=node;
	                    vect[sec].second=data;
                    }

      //               for(int iii=1; iii<=n; iii++)
      //               {   node=iii;
      //  				    int temp=sec,ansi=node;
					 //    bool flag=0;
			   //   	    long long int ans=0;
			   //   	    //cout<<" ii"<<sec<<endl;
						//  while(temp)
						// {   bool one = 0,first_t=0;
						// 	if(ansi==1 )
      //       	           {  //if(flag!=1){ansi=-1;}
      //       	              //else{ansi=1;}
      //                         one=1;
      //                       }
      //                       else
      //                       {
      //   	                    ansi=v[ansi][0];

      //                       	if(ansi<0){flag=1; ansi*=-1;}

      //   	                    if(flag==1)
      //   	                    {
      //   		                    if(node!=0)
      //   			                {          
      //   			                	ans+=v[node][v[node].size()-1];
      //   				                for(int ii=1; ii<=temp; ii++)
      //   				                { 
      //   				                	if(vect[ii].first==node)
      //   				                	{   first_t=1;
      //   				                		ans+=vect[ii].second;
      //   				                	}
      //   				                }
      //   					            node=0;
      //   			                }
      //   			                ans+=v[ansi][v[ansi].size()-1];
      //   			                for(int ii=1; ii<temp; ii++)
      //   			                { 
      //   			                   	if(vect[ii].first==ansi)
      //   			                   	{
      //   			                   		ans+=vect[ii].second;
      //   			                   	}
      //   			                }
      //   		                }


      //                       }
      //                       if(first_t==0){if(vect[temp].first==node){ans+=vect[temp].second; } first_t=1;}
      //                       temp--;
      //                       if(temp==0 && flag==0 && one!=1)
      //                       {
      //                           ans+=v[ansi][v[ansi].size()-1];
      //                       }
                            
      //                       if(vect[temp].first==ansi && one!=1 && flag==0){ans+=vect[temp].second; }
      //   	                //cout<<" temp "<<temp<<" ansi "<<ansi<<endl;
      //   	                //cout<<" ansi:"<<ansi<<" temp:"<<temp<<"= "<<vect[temp].first<<" data:"<<vect[temp].second<< endl;
                            
      //                       if(ansi==1)
      //                       {
      //                       	break;
      //                       }
      //                   }
      //                   cout<<ans<<" ";                               	 

      //               }
      //               cout<<endl;

            }
        } 
        else
        {
        	long long int ans=v[1][1];
        	char arr;
        	int one;
        	for(int i=0; i<q; i++)
        	{   //cout<<"yes "<<q<<" "<<i<<endl; 
        		cin>>arr;
        		if(arr=='?')
        		{   cin>>one;
        			cout<<ans<<endl;
        		}
        		else
        		{
        			int gi,ja;
        			cin>>gi>>ja;
        			ans+=ja;
        		}
        	}
        }
/*    for(int i=0; i<8; i++)
    {
       cout<<i<<" "<<vect[i].first<<" "<<vect[i].second<<endl;
    }
 */
return 0;
}
