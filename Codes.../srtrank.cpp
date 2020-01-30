#include<iostream>
using namespace std;
#define per %1000003;
int fact[1000003];
int invfact[1000003];
int gcdExtended(int a, int b, int *x, int *y) 
{   
 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 

    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1); 

    *x = y1 - (b/a) * x1; 
    *y = x1; 
    return gcd; 
}
int modInverse(int a, int m=1000003) 
{ 
    int x, y; 
    int g = gcdExtended(a, m, &x, &y); 
    
    if (g != 1) 
        return -1; 
    else
    { 
        int res = (x%m + m) % m; 
        return res; 
    } 
} 

void fcakfak(int a)
{    fact[0]=1;
     invfact[0]=1;
     long long int val,lo,la;
    for(int i=1; i<a; i++)
    {
         val=(i*fact[i-1])per;
         fact[i]=val;
         lo=modInverse(i);
         la=invfact[i-1];
         val= (lo*la)per;
         invfact[i]=val;
    }
}


int solve(string str)
{
   
   int arr[52]={0},n=str.length();
   int a = str[0] - 'a',sum=0;
   long long int ans=0,vv=0;
   if(int(str[n-1])>90){arr[int(str[n-1]-'a')+26]++;}
   else {arr[int(str[n-1]-'A')]++;}
   for(int i=n-2; i>=0; i--)
   {  sum=0;vv=1;
      if(int(str[i])>90){a = str[i]-'a'; a+=26;
      arr[a]++;}
      else{a = str[i]-'A';
           arr[a]++;}
      //cout<<" a"<<a<<" feq"<<arr[a]<<endl;
      for(int j=0; j<52; j++){vv*=invfact[arr[j]]; vv=vv per; if(j<a){sum+=arr[j];}}
      //cout<<" vv"<<vv<<" sum"<<sum<<endl; 
     // for(int j=a-1; j>=0; j--)
      //{ 
          //if(arr[j]!=0)
          //{   cout<<" j"<<j<<" arr[j]"<<arr[j]<<" inv"<<invfact[arr[j]]<<endl;
              ans+=((fact[n-1-i])*(vv)*sum) per;
          //}
      //}
   }
   ans=ans per;
   return ans+1;
} 

int main()
{ 
  fcakfak();
  cout<<solve("bbbbaaaa")<<endl;
  
}