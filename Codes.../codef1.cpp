#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int aa[8]={0,1,2,5,10,20,50,100};
	int bb[7]={0,5,10,20,50,100,200};
	int aam=0,bbm=0;
	int i=7,j=6,k=0;
	
	while((j>0 || i>0) && a!=0 )
	{
      aam=b*aa[i];bbm=c*bb[j];
      if(aam>a){i--; continue;}
      if(bbm>a){j--; continue;}
      a-=max(aam,bbm);    

       // if(b*aa[i]<=a){aam=b*aa[i];}else{i--;}
       // if(c*bb[j]<=a){ bbm=c*bb[j];}else{j--;}
       // if((aam>0 && bbm>0) || (i<=0 || j<=0)){}else{continue;}
       // //cout<<a<<" "<<aam<<" "<<bbm<<" "<<i<<" "<<j<<endl;
       // if(aam>0 && bbm>0 && aam<=a && bbm<=a)
       // {
       	
       // 	if(aam>bbm ){a-=aam; i--; aam=0;}else {a-=bbm;bbm=0; j--;}
       // 	continue;
       // }
       // if(aam>0 && aam<=a){a-=aam; aam=0; i--;}
       // if(bbm>0 && bbm<=a){a-=bbm; bbm=0;j--;}
      
       
       
	}
	cout<<a<<endl;
}