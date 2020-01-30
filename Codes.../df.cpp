
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{   
        int aaa=stoi("123");
	int t;
	cin>>t;
	while(t--)
	{
     int n,k,flag=0;
     cin>>n>>k;
     int arr[n];
     for(int i=0; i<n; i++)
     {
     	cin>>arr[i];
     }

     //if(k==2)
     //{
         int a=0,b=0;
          // for(int i=0; i<n; i++)
          // { 
          // 	if(arr[i]==-1)
          // 	{
          //     if(i>0 && arr[i-1]>0 && arr[i+1]>0 && arr[i-1]!=arr[i+1]){flag=1; break; continue;}
          //     if(i>0 && arr[i-1]>0 && arr[i+1]>0 && arr[i-1]==arr[i+1]){if(arr[i-1]==1){arr[i]=2;}else{arr[i]=1;} continue;}
          //     if(i==0 && arr[i+1]>0){if(arr[i+1]==1){arr[i]=2;}else{arr[i]=1;} continue;}
          //     if(i==0){a=0; b=-1; continue;}
          //     a=arr[i-1];
          //   }
          //   if(arr[i]!=-1){b=arr[i];}
          //   if(a==0 && b==0){ }
          //   if(a==0 && b!=0){ }
          //   if(a!=0 && b==0){ }	
          //   else{}
          // }
      int i=0;
      while(i!=n)
      {
      	if( arr[i]>0){if(arr[i+1]==arr[i]){flag=1; break;} a=arr[i]; i++; continue;}
        if(a!=0 ){if(arr[i-1]==1){arr[i]=2;}else{arr[i]=1;}  if(arr[i+1]>0 && i<n-1 && arr[i]==arr[i+1] && k==2){flag=1; break;}else if(arr[i]==arr[i+1] && arr[i+1]>0 && i<n-1){arr[i]=3;} i++;continue;}
        if(arr[i+1]!=-1 && i<n-1)
        {   //cout<<"yo"<<i<<" ";
        	for(int j=i; j>=0; j--)
        	{   
        		if(arr[j+1]==1){arr[j]=2;}else{arr[j]=1;}
        	}
        }
        else if(i==n-1){
        	

        	arr[0]=1;
                     for(int j=1; j<n; j++)
        	{
        		if(arr[j-1]==1){arr[j]=2;}else{arr[j]=1;}
        	}	
        }
        i++;
      }
      if(flag==0){cout<<"YES"<<endl;for( i=0; i<n; i++){cout<<arr[i]<<" ";}cout<<endl;}else{cout<<"NO"<<endl; continue;}
     }


	//}
}




/*		int A[3],C[3];
		cin>>A[0]>>A[1]>>A[2];
		cin>>C[0]>>C[1]>>C[2];
		if(A[0]==A[1]){A[0]=0;}
		else if(A[0]>A[1]){A[0]=2;}
		else{A[0]=1;}

		if(A[1]==A[2]){A[1]=0;}
		else if(A[1]>A[2]){A[1]=2;}
		else{A[1]=1;}

		if(A[0]==A[2]){A[2]=0;}
		else if(A[0]>A[2]){A[2]=2;}
		else{A[2]=1;}

        if(C[0]==C[1]){C[0]=0;}
		else if(C[0]>C[1]){C[0]=2;}
		else{C[0]=1;}
		
		if(C[1]==C[2]){C[1]=0;}
		else if(C[1]>C[2]){C[1]=2;}
		else{C[1]=1;}
        
        if(C[0]==C[2]){C[2]=0;}
		else if(C[0]>C[2]){C[2]=2;}
		else{C[2]=1;}
        
		// if(A[1]==A[2]){A[1]=0;}else{A[1]=1;}
		// if(C[0]==C[1]){C[0]=0;}else{C[0]=1;}
		// if(C[1]==C[2]){C[1]=0;}else{C[1]=1;}
		if(A[0]==C[0] && A[1]==C[1] && A[2]==C[2]){cout<<"FAIR"<<endl;}else{cout<<"NOT FAIR"<<endl;}*/
