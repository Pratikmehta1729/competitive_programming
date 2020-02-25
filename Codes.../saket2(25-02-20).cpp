#include<bits/stdc++.h>
using namespace std;
int main(){
int n = a.size();
int m = a[0].size();	
vector<vector<int> > vec(n);
for(int i=0; i<n; i++)
{
	vec[i] = vector<int>(m); 
}

for(int i=0; i<n; i++)
{
	for (int j=0; j<m; j++)
	{
		vec[i][j]=a[i][j];
		if(j>0){vec[i][j]+=vec[i][j-1];}
		

	}
}
for(int i=0; i<n; i++)
{
	for (int j=0; j<m; j++)
	{
		
		if(i>0){vec[i][j]+=vec[i-1][j];}

	}
}
return vec;

}


