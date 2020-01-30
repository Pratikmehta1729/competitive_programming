#include<bits/stdc++.h> 
using namespace std; 
int main()
{
    int a=9,b=2;
    int arr[23]={4,4,1,4,13,8,8,8,0,8,14,9,15,11,-1,10,15,22,22,22,22,22,21};
    int n=23;
    int temp=a,v;
    
    do{       
            
            v=arr[temp];
            arr[temp]=-2;
            temp=v;
    }while(temp!=a && temp!=-1 && temp!=-2);
   temp=b;int ans=-1;
          // for(int i=0; i<23; i++)
          // {
          // 	cout<<arr[i]<<" ";
          // }  
  
    
    do{
                temp=arr[temp];
                if(arr[temp]==-2){ ans=temp;break;}  
    }while(temp!=b && temp!=-1 );
    cout<<ans<<endl;

}