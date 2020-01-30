#include<bits/stdc++.h>
using namespace std;
int main()
{
// string sf="sj sld sl dsls sl lsd",dd,ff="fd fd";   
// stringstream str(sf);

// str>>dd;
// cout<<dd<<endl;
// str.str("");
// str.clear();
// str<<ff;
// str>>dd;
// cout<<dd<<endl;
	string str[5];
   for(int i=0; i<5; i++)
   {
   	getline(cin,str[i]);
   }
    for(int i=0; i<5; i++)
   {
        cout<<str[i]<<endl;
   }	
}








#include<bits/stdc++.h>
using namespace std;
int main()
  {
  int t;
  cin>>t;
  while(t--)
  {map<string,string> m;
   int n,d;
   cin>>n>>d;
   string st[n];
   for(int i=0; i<n; i++)
   {
   	cin>>st[i];
   	m[st[i]]="0";
   }
   int a;
   string sd;
   for(int i=0; i<d; i++)
   { cin>>a;
     for(int j=0; j<a; j++)
     {
         cin>>sd;
         if(m[sd]=="0"){m[sd]="1";}
     }
   }
   for(int i=0; i<n; i++)
   {
   	if(m[st[i]]=="1"){cout<<"Yes"<<" ";}else{cout<<"No"<<" ";}
   }
   cout<<endl;
  }  
   //char str[];
 // 	scanf("%s",&str);
 // 	printf("%s\n",str );
// string str[5];
// for(int i=0; i<5; i++)
// {
// 	cin>>str[i];
// }
//  for(int i=0; i<5; i++)
// {
// 	cout<<str[i]<<endl;
// }
 	// int t;
  //  cin>>t;
  //  while(t--){ 
   // int n,d;
   // cin>>n>>d;
   // string word,str,stt[d];
   // getline(cin,str);
   //  stringstream dd;
   //  string str;
   //  getline(cin,str);
   //  string word;
   // dd<<str;	
   // map<string,string> m;
   // m.insert(pair<int,int>(4,5));
   // m.insert(pair<int,int>(5,5));
   // m["ster"]="8";
   // m["pratik"]="mehta";
   // while(dd>>word){
   // 	cout<<word<<" "<<endl;
   // 	// m[word]="0";
   // }
    // dd.str("");
    // dd.clear();
    // dd<<str;  
    // while(dd>>word){
   	// cout<<m[word]<<" ";
   // }
   // for(int i=0; i<d; i++)
   // { 
   // 	dd.str("");
   //  dd.clear();
   //  getline(cin,stt[i]);
   //  dd<<stt[i];
   //  dd>>word;
   //  while(dd>>word){if(m[word]=="0"){m[word]="1";}}
   // }
    // dd.str("");
    // dd.clear();
    // dd<<str;
    // while(dd>>word){if(m[word]=="0"){cout<<"YES"<<" ";}else{cout<<"NO"<<" ";}}
   // for(int i=0;)

   // for(int i=0)
   // map<string,string>::iterator itr;
   // itr=m.begin();
   // //itr=itr++;
   // cout<<m["ster"]<<endl;
   //   for (itr = m.begin(); itr != m.end(); ++itr) { 
   //       cout << '\t' << itr->first 
   // //            << '\t' << itr->second << '\n'; 
   //  } 
   }
   
   
   
   


