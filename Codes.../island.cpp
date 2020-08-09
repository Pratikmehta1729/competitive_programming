#include<bits/stdc++.h>
using namespace std;
void gobae(vector< vector<int > >& v, int i , int j)
{       
       int n=v.size();
       int m=v[0].size();      
       v[i][j]=-1;
       if(i<n-1 && v[i+1][j]==1){gobae(v,i+1,j);}
       if(j<m-1 && v[i][j+1]==1){gobae(v,i,j+1);}
       if(i>0 && v[i-1][j]==1){gobae(v,i-1,j);}
       if(j>0 && v[i][j-1]==1){gobae(v,i,j-1);}

}
int main()
{
  vector< vector<int> > v {{1,1,1,1,0},

                             {1,1,0,1,0},

                             {1,1,0,0,0},

                             {0,0,0,0,0}};
 int n=v.size();
 int m=v[0].size();
 int count=0;
 for(int i=0; i<n; i++)
 {
 	for(int j=0; j<m; j++)
 	{
 		if(v[i][j]==1)
 		{
 			gobae(v,i,j);
 			count++;
 		}
 	}
 }                        
}