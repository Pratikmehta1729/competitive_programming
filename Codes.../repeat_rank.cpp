#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26]={0};
    vector<int> vect;
    // char c = 'z'; 
    // int b = c-'a';
    // cout<<b;
    string str = "abbjkdffsbkdbvcbjcbcbcbcnikjczsnzdhn";
    int n = str.length(),b;
    cout<<n<<"\n";
    int ad[n+1];
    ad[0]=1;
    for(int i=1; i<=n; i++)
    {
     ad[i]=(ad[i-1]*i)%1000003;
    }
    for(int i=n-1; i>=0; i--)
    {   b = str[i]-'a';
       arr[b]++;
       
    }
     for(int i=n-1; i>=0; i--)
    {  b=str[i]-'a';
       cout<<arr[b]<<" : :"<<ad[i]<<endl;
       
    }
      
  cout<<"jouaaa";
    return 0;
}

