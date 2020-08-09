#include <bits/stdc++.h>
using namespace std;
int main()
{
  int k=5;
  k*=2;
  k--;
	vector<vector<int> > v(k);
  for(int i=0; i<k; i++)
  {
    v[i]=vector<int> (k);
  }
  cout<<v.size()<<" "<<v[0].size()<<endl;
	   // v[0].push_back(1);
	   // v[0].push_back(1);                
	   // v[0].push_back(1);
	   // v[0].push_back(1);                
	   // v[0].push_back(1);

	   // v[1].push_back(2);
	   // v[1].push_back(2);
	   // v[1].push_back(2);
	   // v[1].push_back(2);                
	   // v[1].push_back(2);

	   // v[2].push_back(3);
	   // v[2].push_back(3);
	   // v[2].push_back(3);
	   // v[2].push_back(3);                
	   // v[2].push_back(3);

	   // v[3].push_back(4);
	   // v[3].push_back(4);
	   // v[3].push_back(4);
	   // v[3].push_back(4);                
	   // v[3].push_back(4);
	
	
	  int flag;
	  int i=0;
	  int m=v.size(),n=v[0].size();
	  int currX=0;
    int currY=-1;
    int g;

    while(1)
    {

      
      while(currY<n-i-1)
      {
        currY++;
        cout<<v[currX][currY]<<"*"<<i<<" ";
        v[currX][currY]=((n+1)/2)-i;
        flag=1;
      }
      if(flag!=1){break;}
      while(currX<m-i-1)
      {
        currX++;
        cout<<v[currX][currY]<<"*"<<i<<" ";
        flag=2;
        v[currX][currY]=((n+1)/2)-i;
      }
      if(flag!=2){break;}

      while(currY>i)
      {
        currY--;
        cout<<v[currX][currY]<<"*"<<i<<" ";
        flag=3;
        v[currX][currY]=((n+1)/2)-i;
      }
      if(flag!=3){break;}
    
      while(currX>i+1)
      {
        currX--;
        cout<<v[currX][currY]<<"*"<<i<<" ";
        flag=4;
        v[currX][currY]=((n+1)/2)-i;
      }
      if(flag!=4){break;} 

      i++;
    }
    cout<<endl;
    for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
      {
        cout<<v[i][j]<<" ";
      }
      cout<<endl;
    }

}
