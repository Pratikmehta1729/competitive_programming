#include<iostream>
#include <iterator> 
#include <map> 
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);cin.tie(0);
	// int t;
	// cin>>t;
	// while(t--)
	// {
		    map<int, int> gquiz1; 
  
    // insert elements in random order 
    gquiz1.insert(pair<int, int>(1, 40)); 
    gquiz1.insert(pair<int, int>(2, 30)); 
    gquiz1.insert(pair<int, int>(3, 60)); 
    cout<<gquiz1[3]<<" "<<gquiz1[2]<<" "<<gquiz1[2.1]<<" "<<gquiz1[90];

//	}
}