#include<bits/stdc++.h>
using namespace std;
int main()
{
	string key,msg;
	 getline(cin,key);
	 getline(cin,msg);

	 int n = msg.length();
	 int m = key.length();
	 

    pair <char, char > PAIR1[n] ;
    for(int i=0; i<n; i++)
    {
           PAIR1[i].first = key[i%m]; 
           PAIR1[i].second = msg[i] ;
           if(i!=0 && i%m==m-1){sort(PAIR1+i-m+1,PAIR1+i+1);}   	
    } 
    for(int i=0; i<n; i++){cout<<PAIR1[i].second;}

 
}