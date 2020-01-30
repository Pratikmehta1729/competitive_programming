#include <bits/stdc++.h>
using namespace std;

 int main()
 {
   // vector< vector< vector< int >  >  > a(3);
   // a[0]=vector< vector< int >  > (3);


 	vector<vector<int> > v(3);
    v[0]=vector<int>(3);
    v[0][0]=1;
    v[0][1]=2;
    v[0][2]=3;
    v[1]=vector<int>(2);
    v[1][0]=4;
    v[1][1]=5;
    v[2]=vector<int>(1);
    v[2][0]=6;
    int *s=&v[0][0];
    cout<<v[0][0]<<" address -> "<<&v[0][0]<<" see "<<(s)<<endl;
    cout<<v[0][1]<<" address -> "<<&v[0][1]<<" see "<<(++s)<<endl;
    cout<<v[0][2]<<" address -> "<<&v[0][2]<<" see "<<(++s)<<endl;
    cout<<v[1][0]<<" address -> "<<&v[1][0]<<" see "<<(++s)<<endl;
    cout<<v[1][1]<<" address -> "<<&v[1][1]<<" see "<<(++s)<<endl;
    cout<<v[2][0]<<" address -> "<<&v[2][0]<<" see "<<(++s)<<endl;
    cout<<v[2][0]<<" address -> "<<&v[2][0]<<" see "<<(++s)<<endl;
    cout<<v[2][0]<<" address -> "<<&v[2][0]<<" see "<<(++s)<<endl;                    
 //  typeid(a) b;
// 	cout<<typeof(9);
 	//cout<<typeid(a).name();
//    vector<char> v;	
 }

