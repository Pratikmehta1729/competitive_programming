#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void subString(char str[], int n)  
{ 
    // Pick starting point 
    for (int len = 1; len <= n; len++)  
    {     
        // Pick ending point 
        for (int i = 0; i <= n - len; i++)  
        { 
            //  Print characters from current 
            // starting point to current ending 
            // point.   
            int j = i + len - 1;             
            for (int k = i; k <= j; k++)  
                {cout << str[k];} 
              
            cout << endl; 
        } 
    } 
} 


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

     string s;
     cin>>s;
     int n=s.length();
     char a[s.length()];
     for(int i=0; i<n; i++)
     {
         a[i]=s[i];
     }
     
     sort(a,a+n);
     int arr[8]={0};
     for(int i=0 ;i<nn; i++)
     {
        arr[a[i]-'A']++;

     }
     long int max=1;
     for(int i=1; i<=nn; i++)
     {
          
     }

    return 0;
}