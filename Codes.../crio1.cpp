#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<vector<char> > str;
    string s;
    
    for(int i=0; i<n; i++)
    {
    	vector<char> ch;
        cin>>s;
        ch.push_back('1');
        for(int j=0; j<s.length(); j++)
        {
           ch.push_back(s[j]);  
             
        }
        ch.push_back('0');
        str.push_back(ch);

        
    }
    string pattern;
    cin>>pattern;

    for(int i=0; i<n; i++)
    {   int k=0;
        int count=0;
        int flag=false;
        
        for(int j=0; j<pattern.length(); j++)
        {     cout<<pattern[j]<<" "<<endl;
              while(str[i][k]!=pattern[j] && str[i].size()>0)
              {  
              	 for(int jj=0; jj<str[i].size(); jj++){cout<<str[i][jj]<<" ";}cout<<endl;
              	 if(str[i][k]=='0'){break;} 
              	 if(int(str[i][k])<97 && str[i][k]!='1'){flag=true;}
                  cout<<str[i][k]<<" ";
                  str[i].erase(str[i].begin()+k);

              }
            if(str[i][k]==pattern[j]){k++;}
            else{flag=true;}
        }
        for(int j=0; j<str[i].size(); j++){if(int(str[i][j])<97 && str[i][j]!=0){flag=true;}}
        if(k!=pattern.length()){flag=true;} 
        if(flag==true){cout<<"false"<<endl;}
        else{cout<<"true"<<endl;}
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}





// /******************************************************************************

// Welcome to GDB Online.
// GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
// C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
// Code, Compile, Run and Debug online from anywhere in world.

// *******************************************************************************/
// #include <iostream>
// using namespace std;
// int main()
// {

//   cout<<int('A')<<" "<<int('a');
//       return 0;
// }


// for(int i=0; i<n; i++)
//     {   int A[26]={0};
//         int a[26]={0};
//         for(int j=0; j<str[i].length(); j++)
//         {     
//               if(int(str[i][j])<97){A[int(str[i][j])-65]++; }
//               else{a[int(str[i][j])-97]=1;}
//         }
//         bool flag = false;
//         for(int j=0; j<pattern.length(); j++)
//         {
//             if( int(pattern[j])>=97 && a[int(pattern[j])-97]!=1){flag=true;}
//             if(int(pattern[j])<97){
//                    if(A[int(pattern[j])-65]>0)
//                    {
//                        A[int(pattern[j])-65]--;
//                    }
//                 else{flag=true;}
//                 }
            
//         }
//         for(int j=0; j<26; j++){if(A[j]!=0){flag=true;}}
//     