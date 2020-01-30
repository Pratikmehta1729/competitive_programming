#include<iostream>
using namespace std;
#define per 1000000007
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		
	    unsigned long long int p,n,tt=0,ans=0, a,B,c;
		cin>>a>>B>>c;
		
		a-=1;c-=1;
		//tt=(((a*c)%per)*B)%per;
		//cout<<tt<<endl;
		for(int b=1; b<=B; b++)
		{  tt=0;
            
            for(int ch=0; ch<=b; ch++)
            {   
            	if(ch>a || ch>c){break;}
            	if(ch!=0){p=(b*b)/ch; n=p;}else{p=c; n=a;}	
            	if(p>c){p=c;}
            	if(n>a){n=a;}
            	p-=ch;
            	n-=ch;
                if(p<0){p=0;}
                if(n<0){n=0;}
                tt+=(p+n+1);
                tt%=per;
                //cout<<b<<" ch"<<ch<<" p"<<p<<" c"<<c<<" a"<<a<<" n"<<n<<" tt"<<tt<<endl;
                //tt%per;
            }
            ans+=((a+1)*(c+1))-tt;
            ans%=per;
            //cout<<ans<<endl;
 
	    }
	    cout<<ans<<endl;
	}
}