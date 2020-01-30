#include<bits/stdc++.h>
#include <string>
using namespace std;
int stoi(string str)
{ stringstream strr;
    strr<<str;
    getline(strr, str, '.');
if(str=="0"){return 0;}
int b=0;
 int a = str[0]-'0';
  a*=100;
  b+=a;
  a = str[1]-'0';
  a*=10;
  b+=a;
  a = str[2]-'0';
  b+=a;

  return b;
}
int main()
{   string dd="0" ; 
string s1,s2;
cin>>s1;
int a1 = stoi(s1);
int arr[5]={127,191,223,239,254};
int i=0;
while(a1>arr[i]){i++;}
cout<<"CLASS"<<" "<<char(i+'A')<<endl;
//switch()*/
return 0;
}
